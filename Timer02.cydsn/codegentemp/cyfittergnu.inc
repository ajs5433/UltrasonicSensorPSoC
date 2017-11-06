.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* LCD_LCDPort */
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_LCDPort__0__PORT, 2
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_LCDPort__1__PORT, 2
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_LCDPort__2__PORT, 2
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_LCDPort__3__PORT, 2
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_LCDPort__4__PORT, 2
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_LCDPort__5__PORT, 2
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_LCDPort__6__PORT, 2
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT2_AG
.set LCD_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_LCDPort__DR, CYREG_PRT2_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 2
.set LCD_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT2_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SLW, CYREG_PRT2_SLW

/* P0_1 */
.set P0_1__0__MASK, 0x02
.set P0_1__0__PC, CYREG_PRT0_PC1
.set P0_1__0__PORT, 0
.set P0_1__0__SHIFT, 1
.set P0_1__AG, CYREG_PRT0_AG
.set P0_1__AMUX, CYREG_PRT0_AMUX
.set P0_1__BIE, CYREG_PRT0_BIE
.set P0_1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set P0_1__BYP, CYREG_PRT0_BYP
.set P0_1__CTL, CYREG_PRT0_CTL
.set P0_1__DM0, CYREG_PRT0_DM0
.set P0_1__DM1, CYREG_PRT0_DM1
.set P0_1__DM2, CYREG_PRT0_DM2
.set P0_1__DR, CYREG_PRT0_DR
.set P0_1__INP_DIS, CYREG_PRT0_INP_DIS
.set P0_1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set P0_1__LCD_EN, CYREG_PRT0_LCD_EN
.set P0_1__MASK, 0x02
.set P0_1__PORT, 0
.set P0_1__PRT, CYREG_PRT0_PRT
.set P0_1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set P0_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set P0_1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set P0_1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set P0_1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set P0_1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set P0_1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set P0_1__PS, CYREG_PRT0_PS
.set P0_1__SHIFT, 1
.set P0_1__SLW, CYREG_PRT0_SLW

/* Pin_1 */
.set Pin_1__0__MASK, 0x40
.set Pin_1__0__PC, CYREG_PRT1_PC6
.set Pin_1__0__PORT, 1
.set Pin_1__0__SHIFT, 6
.set Pin_1__AG, CYREG_PRT1_AG
.set Pin_1__AMUX, CYREG_PRT1_AMUX
.set Pin_1__BIE, CYREG_PRT1_BIE
.set Pin_1__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Pin_1__BYP, CYREG_PRT1_BYP
.set Pin_1__CTL, CYREG_PRT1_CTL
.set Pin_1__DM0, CYREG_PRT1_DM0
.set Pin_1__DM1, CYREG_PRT1_DM1
.set Pin_1__DM2, CYREG_PRT1_DM2
.set Pin_1__DR, CYREG_PRT1_DR
.set Pin_1__INP_DIS, CYREG_PRT1_INP_DIS
.set Pin_1__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Pin_1__LCD_EN, CYREG_PRT1_LCD_EN
.set Pin_1__MASK, 0x40
.set Pin_1__PORT, 1
.set Pin_1__PRT, CYREG_PRT1_PRT
.set Pin_1__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Pin_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Pin_1__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Pin_1__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Pin_1__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Pin_1__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Pin_1__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Pin_1__PS, CYREG_PRT1_PS
.set Pin_1__SHIFT, 6
.set Pin_1__SLW, CYREG_PRT1_SLW

/* clock_1 */
.set clock_1__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set clock_1__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set clock_1__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set clock_1__CFG2_SRC_SEL_MASK, 0x07
.set clock_1__INDEX, 0x01
.set clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set clock_1__PM_ACT_MSK, 0x02
.set clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set clock_1__PM_STBY_MSK, 0x02

/* clock_2 */
.set clock_2__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set clock_2__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set clock_2__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set clock_2__CFG2_SRC_SEL_MASK, 0x07
.set clock_2__INDEX, 0x00
.set clock_2__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set clock_2__PM_ACT_MSK, 0x01
.set clock_2__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set clock_2__PM_STBY_MSK, 0x01

/* Echo_Timer_TimerUDB */
.set Echo_Timer_TimerUDB_rstSts_stsreg__0__MASK, 0x01
.set Echo_Timer_TimerUDB_rstSts_stsreg__0__POS, 0
.set Echo_Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB07_08_ACTL
.set Echo_Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG, CYREG_B1_UDB07_08_ST
.set Echo_Timer_TimerUDB_rstSts_stsreg__2__MASK, 0x04
.set Echo_Timer_TimerUDB_rstSts_stsreg__2__POS, 2
.set Echo_Timer_TimerUDB_rstSts_stsreg__3__MASK, 0x08
.set Echo_Timer_TimerUDB_rstSts_stsreg__3__POS, 3
.set Echo_Timer_TimerUDB_rstSts_stsreg__MASK, 0x0D
.set Echo_Timer_TimerUDB_rstSts_stsreg__MASK_REG, CYREG_B1_UDB07_MSK
.set Echo_Timer_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG, CYREG_B1_UDB07_ACTL
.set Echo_Timer_TimerUDB_rstSts_stsreg__STATUS_REG, CYREG_B1_UDB07_ST
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB04_05_ACTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB04_05_CTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB04_05_CTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB04_05_CTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB04_05_CTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B1_UDB04_05_MSK
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB04_05_MSK
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB04_05_MSK
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB04_05_MSK
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK, 0x80
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS, 7
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB04_ACTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG, CYREG_B1_UDB04_CTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG, CYREG_B1_UDB04_ST_CTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG, CYREG_B1_UDB04_CTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG, CYREG_B1_UDB04_ST_CTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK, 0x80
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB04_MSK_ACTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB04_MSK_ACTL
.set Echo_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG, CYREG_B1_UDB04_MSK
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__16BIT_A0_REG, CYREG_B1_UDB04_05_A0
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__16BIT_A1_REG, CYREG_B1_UDB04_05_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__16BIT_D0_REG, CYREG_B1_UDB04_05_D0
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__16BIT_D1_REG, CYREG_B1_UDB04_05_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB04_05_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__16BIT_F0_REG, CYREG_B1_UDB04_05_F0
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__16BIT_F1_REG, CYREG_B1_UDB04_05_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__A0_A1_REG, CYREG_B1_UDB04_A0_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__A0_REG, CYREG_B1_UDB04_A0
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__A1_REG, CYREG_B1_UDB04_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__D0_D1_REG, CYREG_B1_UDB04_D0_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__D0_REG, CYREG_B1_UDB04_D0
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__D1_REG, CYREG_B1_UDB04_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB04_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__F0_F1_REG, CYREG_B1_UDB04_F0_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__F0_REG, CYREG_B1_UDB04_F0
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__F1_REG, CYREG_B1_UDB04_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB04_MSK_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u0__PER_DP_AUX_CTL_REG, CYREG_B1_UDB04_MSK_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__16BIT_A0_REG, CYREG_B1_UDB05_06_A0
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__16BIT_A1_REG, CYREG_B1_UDB05_06_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__16BIT_D0_REG, CYREG_B1_UDB05_06_D0
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__16BIT_D1_REG, CYREG_B1_UDB05_06_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__16BIT_F0_REG, CYREG_B1_UDB05_06_F0
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__16BIT_F1_REG, CYREG_B1_UDB05_06_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__A0_A1_REG, CYREG_B1_UDB05_A0_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__A0_REG, CYREG_B1_UDB05_A0
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__A1_REG, CYREG_B1_UDB05_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__D0_D1_REG, CYREG_B1_UDB05_D0_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__D0_REG, CYREG_B1_UDB05_D0
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__D1_REG, CYREG_B1_UDB05_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__DP_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__F0_F1_REG, CYREG_B1_UDB05_F0_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__F0_REG, CYREG_B1_UDB05_F0
.set Echo_Timer_TimerUDB_sT32_timerdp_u1__F1_REG, CYREG_B1_UDB05_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__16BIT_A0_REG, CYREG_B1_UDB06_07_A0
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__16BIT_A1_REG, CYREG_B1_UDB06_07_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__16BIT_D0_REG, CYREG_B1_UDB06_07_D0
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__16BIT_D1_REG, CYREG_B1_UDB06_07_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB06_07_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__16BIT_F0_REG, CYREG_B1_UDB06_07_F0
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__16BIT_F1_REG, CYREG_B1_UDB06_07_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__A0_A1_REG, CYREG_B1_UDB06_A0_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__A0_REG, CYREG_B1_UDB06_A0
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__A1_REG, CYREG_B1_UDB06_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__D0_D1_REG, CYREG_B1_UDB06_D0_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__D0_REG, CYREG_B1_UDB06_D0
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__D1_REG, CYREG_B1_UDB06_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__DP_AUX_CTL_REG, CYREG_B1_UDB06_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__F0_F1_REG, CYREG_B1_UDB06_F0_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__F0_REG, CYREG_B1_UDB06_F0
.set Echo_Timer_TimerUDB_sT32_timerdp_u2__F1_REG, CYREG_B1_UDB06_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__16BIT_A0_REG, CYREG_B1_UDB07_08_A0
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__16BIT_A1_REG, CYREG_B1_UDB07_08_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__16BIT_D0_REG, CYREG_B1_UDB07_08_D0
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__16BIT_D1_REG, CYREG_B1_UDB07_08_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB07_08_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__16BIT_F0_REG, CYREG_B1_UDB07_08_F0
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__16BIT_F1_REG, CYREG_B1_UDB07_08_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__A0_A1_REG, CYREG_B1_UDB07_A0_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__A0_REG, CYREG_B1_UDB07_A0
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__A1_REG, CYREG_B1_UDB07_A1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__D0_D1_REG, CYREG_B1_UDB07_D0_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__D0_REG, CYREG_B1_UDB07_D0
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__D1_REG, CYREG_B1_UDB07_D1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__DP_AUX_CTL_REG, CYREG_B1_UDB07_ACTL
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__F0_F1_REG, CYREG_B1_UDB07_F0_F1
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__F0_REG, CYREG_B1_UDB07_F0
.set Echo_Timer_TimerUDB_sT32_timerdp_u3__F1_REG, CYREG_B1_UDB07_F1

/* end_echo_IRR */
.set end_echo_IRR__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set end_echo_IRR__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set end_echo_IRR__INTC_MASK, 0x01
.set end_echo_IRR__INTC_NUMBER, 0
.set end_echo_IRR__INTC_PRIOR_NUM, 7
.set end_echo_IRR__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set end_echo_IRR__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set end_echo_IRR__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Trigger_Timer_TimerUDB */
.set Trigger_Timer_TimerUDB_rstSts_stsreg__0__MASK, 0x01
.set Trigger_Timer_TimerUDB_rstSts_stsreg__0__POS, 0
.set Trigger_Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set Trigger_Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG, CYREG_B0_UDB03_04_ST
.set Trigger_Timer_TimerUDB_rstSts_stsreg__2__MASK, 0x04
.set Trigger_Timer_TimerUDB_rstSts_stsreg__2__POS, 2
.set Trigger_Timer_TimerUDB_rstSts_stsreg__3__MASK, 0x08
.set Trigger_Timer_TimerUDB_rstSts_stsreg__3__POS, 3
.set Trigger_Timer_TimerUDB_rstSts_stsreg__MASK, 0x0D
.set Trigger_Timer_TimerUDB_rstSts_stsreg__MASK_REG, CYREG_B0_UDB03_MSK
.set Trigger_Timer_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set Trigger_Timer_TimerUDB_rstSts_stsreg__STATUS_REG, CYREG_B0_UDB03_ST
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB01_02_ACTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB01_02_CTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB01_02_CTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB01_02_CTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB01_02_CTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB01_02_MSK
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB01_02_MSK
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB01_02_MSK
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB01_02_MSK
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK, 0x80
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS, 7
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB01_ACTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG, CYREG_B0_UDB01_CTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB01_ST_CTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG, CYREG_B0_UDB01_CTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB01_ST_CTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK, 0x80
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB01_MSK_ACTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB01_MSK_ACTL
.set Trigger_Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG, CYREG_B0_UDB01_MSK
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__16BIT_A0_REG, CYREG_B0_UDB00_01_A0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__16BIT_A1_REG, CYREG_B0_UDB00_01_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__16BIT_D0_REG, CYREG_B0_UDB00_01_D0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__16BIT_D1_REG, CYREG_B0_UDB00_01_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB00_01_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__16BIT_F0_REG, CYREG_B0_UDB00_01_F0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__16BIT_F1_REG, CYREG_B0_UDB00_01_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__A0_A1_REG, CYREG_B0_UDB00_A0_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__A0_REG, CYREG_B0_UDB00_A0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__A1_REG, CYREG_B0_UDB00_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__D0_D1_REG, CYREG_B0_UDB00_D0_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__D0_REG, CYREG_B0_UDB00_D0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__D1_REG, CYREG_B0_UDB00_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB00_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__F0_F1_REG, CYREG_B0_UDB00_F0_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__F0_REG, CYREG_B0_UDB00_F0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u0__F1_REG, CYREG_B0_UDB00_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__16BIT_A0_REG, CYREG_B0_UDB01_02_A0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__16BIT_A1_REG, CYREG_B0_UDB01_02_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__16BIT_D0_REG, CYREG_B0_UDB01_02_D0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__16BIT_D1_REG, CYREG_B0_UDB01_02_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB01_02_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__16BIT_F0_REG, CYREG_B0_UDB01_02_F0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__16BIT_F1_REG, CYREG_B0_UDB01_02_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__A0_A1_REG, CYREG_B0_UDB01_A0_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__A0_REG, CYREG_B0_UDB01_A0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__A1_REG, CYREG_B0_UDB01_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__D0_D1_REG, CYREG_B0_UDB01_D0_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__D0_REG, CYREG_B0_UDB01_D0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__D1_REG, CYREG_B0_UDB01_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__DP_AUX_CTL_REG, CYREG_B0_UDB01_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__F0_F1_REG, CYREG_B0_UDB01_F0_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__F0_REG, CYREG_B0_UDB01_F0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__F1_REG, CYREG_B0_UDB01_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB01_MSK_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u1__PER_DP_AUX_CTL_REG, CYREG_B0_UDB01_MSK_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__16BIT_A0_REG, CYREG_B0_UDB02_03_A0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__16BIT_A1_REG, CYREG_B0_UDB02_03_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__16BIT_D0_REG, CYREG_B0_UDB02_03_D0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__16BIT_D1_REG, CYREG_B0_UDB02_03_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB02_03_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__16BIT_F0_REG, CYREG_B0_UDB02_03_F0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__16BIT_F1_REG, CYREG_B0_UDB02_03_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__A0_A1_REG, CYREG_B0_UDB02_A0_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__A0_REG, CYREG_B0_UDB02_A0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__A1_REG, CYREG_B0_UDB02_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__D0_D1_REG, CYREG_B0_UDB02_D0_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__D0_REG, CYREG_B0_UDB02_D0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__D1_REG, CYREG_B0_UDB02_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__DP_AUX_CTL_REG, CYREG_B0_UDB02_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__F0_F1_REG, CYREG_B0_UDB02_F0_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__F0_REG, CYREG_B0_UDB02_F0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u2__F1_REG, CYREG_B0_UDB02_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__16BIT_A0_REG, CYREG_B0_UDB03_04_A0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__16BIT_A1_REG, CYREG_B0_UDB03_04_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__16BIT_D0_REG, CYREG_B0_UDB03_04_D0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__16BIT_D1_REG, CYREG_B0_UDB03_04_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__16BIT_F0_REG, CYREG_B0_UDB03_04_F0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__16BIT_F1_REG, CYREG_B0_UDB03_04_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__A0_A1_REG, CYREG_B0_UDB03_A0_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__A0_REG, CYREG_B0_UDB03_A0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__A1_REG, CYREG_B0_UDB03_A1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__D0_D1_REG, CYREG_B0_UDB03_D0_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__D0_REG, CYREG_B0_UDB03_D0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__D1_REG, CYREG_B0_UDB03_D1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__DP_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__F0_F1_REG, CYREG_B0_UDB03_F0_F1
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__F0_REG, CYREG_B0_UDB03_F0
.set Trigger_Timer_TimerUDB_sT32_timerdp_u3__F1_REG, CYREG_B0_UDB03_F1

/* start_echo_IRR */
.set start_echo_IRR__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set start_echo_IRR__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set start_echo_IRR__INTC_MASK, 0x02
.set start_echo_IRR__INTC_NUMBER, 1
.set start_echo_IRR__INTC_PRIOR_NUM, 7
.set start_echo_IRR__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set start_echo_IRR__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set start_echo_IRR__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 4
.set CYDEV_CHIP_DIE_PSOC4A, 2
.set CYDEV_CHIP_DIE_PSOC5LP, 5
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 2
.set CYDEV_CHIP_MEMBER_4D, 3
.set CYDEV_CHIP_MEMBER_5A, 4
.set CYDEV_CHIP_MEMBER_5B, 5
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_ES0, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 0
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x1000
.set CYDEV_INSTRUCT_CACHE_ENABLED, 0
.set CYDEV_INTR_RISING, 0x00000003
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x4000
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5500
.set CYDEV_VDDD_MV, 5500
.set CYDEV_VDDIO0_MV, 5500
.set CYDEV_VDDIO1_MV, 5500
.set CYDEV_VDDIO2_MV, 5500
.set CYDEV_VDDIO3_MV, 5500
.set CYDEV_VIO0_MV, 5500
.set CYDEV_VIO1_MV, 5500
.set CYDEV_VIO2_MV, 5500
.set CYDEV_VIO3_MV, 5500
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif