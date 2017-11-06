/*******************************************************************************
* File Name: echo_end_IRR.c  
* Version 1.70
*
*  Description:
*   API for controlling the state of an interrupt.
*
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/


#include <cydevice_trm.h>
#include <CyLib.h>
#include <echo_end_IRR.h>

#if !defined(echo_end_IRR__REMOVED) /* Check for removal by optimization */

/*******************************************************************************
*  Place your includes, defines and code here 
********************************************************************************/
/* `#START echo_end_IRR_intc` */

/* `#END` */

#ifndef CYINT_IRQ_BASE
#define CYINT_IRQ_BASE      16
#endif /* CYINT_IRQ_BASE */
#ifndef CYINT_VECT_TABLE
#define CYINT_VECT_TABLE    ((cyisraddress **) CYREG_NVIC_VECT_OFFSET)
#endif /* CYINT_VECT_TABLE */

/* Declared in startup, used to set unused interrupts to. */
CY_ISR_PROTO(IntDefaultHandler);


/*******************************************************************************
* Function Name: echo_end_IRR_Start
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_Start(void)
{
    /* For all we know the interrupt is active. */
    echo_end_IRR_Disable();

    /* Set the ISR to point to the echo_end_IRR Interrupt. */
    echo_end_IRR_SetVector(&echo_end_IRR_Interrupt);

    /* Set the priority. */
    echo_end_IRR_SetPriority((uint8)echo_end_IRR_INTC_PRIOR_NUMBER);

    /* Enable it. */
    echo_end_IRR_Enable();
}


/*******************************************************************************
* Function Name: echo_end_IRR_StartEx
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_StartEx(cyisraddress address)
{
    /* For all we know the interrupt is active. */
    echo_end_IRR_Disable();

    /* Set the ISR to point to the echo_end_IRR Interrupt. */
    echo_end_IRR_SetVector(address);

    /* Set the priority. */
    echo_end_IRR_SetPriority((uint8)echo_end_IRR_INTC_PRIOR_NUMBER);

    /* Enable it. */
    echo_end_IRR_Enable();
}


/*******************************************************************************
* Function Name: echo_end_IRR_Stop
********************************************************************************
*
* Summary:
*   Disables and removes the interrupt.
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_Stop(void)
{
    /* Disable this interrupt. */
    echo_end_IRR_Disable();

    /* Set the ISR to point to the passive one. */
    echo_end_IRR_SetVector(&IntDefaultHandler);
}


/*******************************************************************************
* Function Name: echo_end_IRR_Interrupt
********************************************************************************
*
* Summary:
*   The default Interrupt Service Routine for echo_end_IRR.
*
*   Add custom code between the coments to keep the next version of this file
*   from over writting your code.
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(echo_end_IRR_Interrupt)
{
    /*  Place your Interrupt code here. */
    /* `#START echo_end_IRR_Interrupt` */

    /* `#END` */
}


/*******************************************************************************
* Function Name: echo_end_IRR_SetVector
********************************************************************************
*
* Summary:
*   Change the ISR vector for the Interrupt. Note calling echo_end_IRR_Start
*   will override any effect this method would have had. To set the vector 
*   before the component has been started use echo_end_IRR_StartEx instead.
*
* Parameters:
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_SetVector(cyisraddress address)
{
    cyisraddress * ramVectorTable;

    ramVectorTable = (cyisraddress *) *CYINT_VECT_TABLE;

    ramVectorTable[CYINT_IRQ_BASE + (uint32)echo_end_IRR__INTC_NUMBER] = address;
}


/*******************************************************************************
* Function Name: echo_end_IRR_GetVector
********************************************************************************
*
* Summary:
*   Gets the "address" of the current ISR vector for the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Address of the ISR in the interrupt vector table.
*
*******************************************************************************/
cyisraddress echo_end_IRR_GetVector(void)
{
    cyisraddress * ramVectorTable;

    ramVectorTable = (cyisraddress *) *CYINT_VECT_TABLE;

    return ramVectorTable[CYINT_IRQ_BASE + (uint32)echo_end_IRR__INTC_NUMBER];
}


/*******************************************************************************
* Function Name: echo_end_IRR_SetPriority
********************************************************************************
*
* Summary:
*   Sets the Priority of the Interrupt. Note calling echo_end_IRR_Start
*   or echo_end_IRR_StartEx will override any effect this method 
*   would have had. This method should only be called after 
*   echo_end_IRR_Start or echo_end_IRR_StartEx has been called. To set 
*   the initial priority for the component use the cydwr file in the tool.
*
* Parameters:
*   priority: Priority of the interrupt. 0 - 7, 0 being the highest.
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_SetPriority(uint8 priority)
{
    *echo_end_IRR_INTC_PRIOR = priority << 5;
}


/*******************************************************************************
* Function Name: echo_end_IRR_GetPriority
********************************************************************************
*
* Summary:
*   Gets the Priority of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Priority of the interrupt. 0 - 7, 0 being the highest.
*
*******************************************************************************/
uint8 echo_end_IRR_GetPriority(void)
{
    uint8 priority;


    priority = *echo_end_IRR_INTC_PRIOR >> 5;

    return priority;
}


/*******************************************************************************
* Function Name: echo_end_IRR_Enable
********************************************************************************
*
* Summary:
*   Enables the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_Enable(void)
{
    /* Enable the general interrupt. */
    *echo_end_IRR_INTC_SET_EN = echo_end_IRR__INTC_MASK;
}


/*******************************************************************************
* Function Name: echo_end_IRR_GetState
********************************************************************************
*
* Summary:
*   Gets the state (enabled, disabled) of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   1 if enabled, 0 if disabled.
*
*******************************************************************************/
uint8 echo_end_IRR_GetState(void)
{
    /* Get the state of the general interrupt. */
    return ((*echo_end_IRR_INTC_SET_EN & (uint32)echo_end_IRR__INTC_MASK) != 0u) ? 1u:0u;
}


/*******************************************************************************
* Function Name: echo_end_IRR_Disable
********************************************************************************
*
* Summary:
*   Disables the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_Disable(void)
{
    /* Disable the general interrupt. */
    *echo_end_IRR_INTC_CLR_EN = echo_end_IRR__INTC_MASK;
}


/*******************************************************************************
* Function Name: echo_end_IRR_SetPending
********************************************************************************
*
* Summary:
*   Causes the Interrupt to enter the pending state, a software method of
*   generating the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_SetPending(void)
{
    *echo_end_IRR_INTC_SET_PD = echo_end_IRR__INTC_MASK;
}


/*******************************************************************************
* Function Name: echo_end_IRR_ClearPending
********************************************************************************
*
* Summary:
*   Clears a pending interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void echo_end_IRR_ClearPending(void)
{
    *echo_end_IRR_INTC_CLR_PD = echo_end_IRR__INTC_MASK;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
