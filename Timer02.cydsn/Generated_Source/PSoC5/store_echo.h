/*******************************************************************************
* File Name: store_echo.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_store_echo_H)
#define CY_ISR_store_echo_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void store_echo_Start(void);
void store_echo_StartEx(cyisraddress address);
void store_echo_Stop(void);

CY_ISR_PROTO(store_echo_Interrupt);

void store_echo_SetVector(cyisraddress address);
cyisraddress store_echo_GetVector(void);

void store_echo_SetPriority(uint8 priority);
uint8 store_echo_GetPriority(void);

void store_echo_Enable(void);
uint8 store_echo_GetState(void);
void store_echo_Disable(void);

void store_echo_SetPending(void);
void store_echo_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the store_echo ISR. */
#define store_echo_INTC_VECTOR            ((reg32 *) store_echo__INTC_VECT)

/* Address of the store_echo ISR priority. */
#define store_echo_INTC_PRIOR             ((reg8 *) store_echo__INTC_PRIOR_REG)

/* Priority of the store_echo interrupt. */
#define store_echo_INTC_PRIOR_NUMBER      store_echo__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable store_echo interrupt. */
#define store_echo_INTC_SET_EN            ((reg32 *) store_echo__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the store_echo interrupt. */
#define store_echo_INTC_CLR_EN            ((reg32 *) store_echo__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the store_echo interrupt state to pending. */
#define store_echo_INTC_SET_PD            ((reg32 *) store_echo__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the store_echo interrupt. */
#define store_echo_INTC_CLR_PD            ((reg32 *) store_echo__INTC_CLR_PD_REG)


#endif /* CY_ISR_store_echo_H */


/* [] END OF FILE */
