/********************************************************************************
* File Name: main.c
*
* Version : 1.00
*
* Description: 
*  This is a source code for example project of 16 bit Timer UDB Block.
*
* Test Result:
*  Watch capture output on P0_0, tc output on P0_1, and Period, Compare and 
*  Count value on LCD.
*
********************************************************************************
* Copyright 2012, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/

#include <device.h>
#include <end_echo_IRR.h>
#include <Echo_Timer_ISR.h>
#include <Echo_Timer.h>
#include <start_echo_IRR.h>
#include <stdio.h>
#include <time.h>


#define max_32b_int 4294967295u


uint8 InterruptCnt;
uint32 echo=0;
uint32 min = max_32b_int; 
uint32 max =0;

CY_ISR(start_echo_IRR_Interrupt)
{
    start_echo_IRR_ClearPending();
    
    Echo_Timer_Stop();
    Echo_Timer_Init();
    Echo_Timer_Start();
}


CY_ISR(end_echo_IRR_Interrupt)
{
    end_echo_IRR_ClearPending();    
    echo = Echo_Timer_ReadCounter();
    
    Echo_Timer_Stop();
}



/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
* Main function performs following functions:
* 1: Enables the clock
* 2: Start the Timer
* 3: Initializes the LCD
* 4: Print Period, capture, counter value on LCD
* 
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{   
    /* Enable the global interrupt */
    CyGlobalIntEnable;
    
    /* 1 - Enable the Interrupt component connected to Timer interrupt */
    /* 2 - Start the components */

    Trigger_Timer_Start();
    
    start_echo_IRR_StartEx(start_echo_IRR_Interrupt);
    start_echo_IRR_Start();
    
    end_echo_IRR_StartEx(end_echo_IRR_Interrupt);
    end_echo_IRR_Start();
    
    //Echo_Timer_ISR_StartEx(Echo_Timer_ISR_Interrupt);
    //Echo_Timer_ISR_Start();
    
    /* Display TMR-16 on LCD */
    LCD_Start();
    LCD_Position(0u, 0u);
    LCD_PrintString("TMR-16"); 

    for(;;)
    {
        LCD_Position(0u, 0u);
        LCD_PrintInt16(echo/2u);
        
        if (echo>max){
            max = echo;
            LCD_Position(0u, 8u);
            //LCD_PrintString("MAX: ");
            //LCD_Position(0u, 12u);
            LCD_PrintInt16(max/2u);
            //LCD_PrintInt32(max);
        }
        if (echo<min){
            min = echo;
            LCD_Position(1u, 8u);
            //LCD_PrintString("MIN: ");
            //LCD_Position(0u, 121u);
            //LCD_PrintInt32(min);
            LCD_PrintInt16(min/2u);
        }
		CyDelay(100u);
    }
}


/* [] END OF FILE */
