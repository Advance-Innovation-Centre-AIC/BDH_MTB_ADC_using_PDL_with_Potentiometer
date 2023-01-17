/******************************************************************************
* File Name:   main.c
*
* Description: This is the source code for the Empty PSoC6 Application
*              for ModusToolbox.
*
* Related Document: See README.md
*
*/

#include "cy_pdl.h"
#include "cybsp.h"
#include <stdio.h>


int main(void)
{
    cy_rslt_t result;
    uint32_t counter = 0;

    // UART context variable
	cy_stc_scb_uart_context_t UART_context;

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    __enable_irq();

    /* Configure and enable the UART peripheral */
	Cy_SCB_UART_Init(UART_HW, &UART_config, &UART_context);
	Cy_SCB_UART_Enable(UART_HW);

	// Initialize the AREF - block needed by ADC_HW ADC
	Cy_SysAnalog_Init(&AREF_config);
	// Initialize AREF
	Cy_SysAnalog_Enable();

	// Initialize the ADC
	Cy_SAR_Init(ADC_HW, &ADC_config);
	// Enable the ADC
	Cy_SAR_Enable(ADC_HW);

	int32_t ADCresult = 0; // ADC conversion result
	int32_t microVolts = 0; // Var to store voltage conversion of ADC result

    for (;;){
    	// Start a single conversion
		Cy_SAR_StartConvert(ADC_HW, CY_SAR_START_CONVERT_SINGLE_SHOT);
		if(Cy_SAR_IsEndConversion(ADC_HW, CY_SAR_WAIT_FOR_RESULT) == CY_SAR_SUCCESS){
			ADCresult = Cy_SAR_GetResult32(ADC_HW, 0);
			microVolts = Cy_SAR_CountsTo_uVolts(ADC_HW, 0, ADCresult);
		}
		char stringBuffer[30];
		sprintf(stringBuffer, "ADC (24V) = %d\r\n", (int) ((microVolts*24)/3304866));

		// For Serial Studio
		//sprintf(stringBuffer, "/*%d,%d*/\r\n", counter++, (int) ((microVolts*24)/3304866));
		Cy_SCB_UART_PutString(UART_HW, stringBuffer);
		Cy_SysLib_Delay(100);
    }
}

/* [] END OF FILE */
