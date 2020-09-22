/** 
 * \file        stc89.h
 * \author      sanpe-qf
 */

#ifndef _STC89_H_
#define _STC89_H_

/*
 * Port 0
 */
__sfr  __at (0x80) P0       ;
__sbit __at (0x80) P0_0     ;
__sbit __at (0x81) P0_1     ;
__sbit __at (0x82) P0_2     ;
__sbit __at (0x83) P0_3     ;
__sbit __at (0x84) P0_4     ;
__sbit __at (0x85) P0_5     ;
__sbit __at (0x86) P0_6     ;
__sbit __at (0x87) P0_7     ;

/*
 * Stack Pointer
 */
__sfr  __at (0x81) SP       ;
#define SP_0 0
#define SP_1 1
#define SP_2 2
#define SP_3 3
#define SP_4 4
#define SP_5 5
#define SP_6 6
#define SP_7 7

/*
 * DPTR Low
 */
__sfr  __at (0x82) DPL      ;
#define DPL_0 0
#define DPL_1 1
#define DPL_2 2
#define DPL_3 3
#define DPL_4 4
#define DPL_5 5
#define DPL_6 6
#define DPL_7 7

/*
 * DPTR High
 */
__sfr  __at (0x83) DPH       ;
#define DPL_0 0
#define DPL_1 1
#define DPL_2 2
#define DPL_3 3
#define DPL_4 4
#define DPL_5 5
#define DPL_6 6
#define DPL_7 7

/*
 * Power Config
 */
__sfr __at (0x87) PCON      ;
#define IDL   0
#define PD    1
#define GF0   2
#define GF1   3
#define POF   4
#define SMOD0 6
#define SMOD  7

/*
 * Timer Config
 */
__sfr  __at (0x88) TCON     ;
__sbit __at (0x88) IT0      ;
__sbit __at (0x89) IE0      ;
__sbit __at (0x8A) IT1      ;
__sbit __at (0x8B) IE1      ;
__sbit __at (0x8C) TR0      ;
__sbit __at (0x8D) TF0      ;
__sbit __at (0x8E) TR1      ;
__sbit __at (0x8F) TF1      ;

/*
 * Timer Mode
 */
__sfr  __at (0x89) TMOD     ;
#define T0_M0   0
#define T0_M1   1
#define T0_CT   2
#define T0_GATE 3
#define T1_M0   4
#define T1_M1   5
#define T1_CT   6
#define T0_GATE 7

/*
 * Timer 0 Low
 */
__sfr  __at (0x8A) TL0      ;
#define TL0_0 0
#define TL0_1 1
#define TL0_2 2
#define TL0_3 3
#define TL0_4 4
#define TL0_5 5
#define TL0_6 6
#define TL0_7 7

/*
 * Timer 1 Low
 */
__sfr  __at (0x8B) TL1      ;
#define TL1_0 0
#define TL1_1 1
#define TL1_2 2
#define TL1_3 3
#define TL1_4 4
#define TL1_5 5
#define TL1_6 6
#define TL1_7 7

/*
 * Timer 0 High
 */
__sfr  __at (0x8C) TH0      ;
#define TH0_0 0
#define TH0_1 1
#define TH0_2 2
#define TH0_3 3
#define TH0_4 4
#define TH0_5 5
#define TH0_6 6
#define TH0_7 7

/*
 * Timer 1 High
 */
__sfr  __at (0x8D) TH1      ;
#define TH1_0 0
#define TH1_1 1
#define TH1_2 2
#define TH1_3 3
#define TH1_4 4
#define TH1_5 5
#define TH1_6 6
#define TH1_7 7

/*
 * Auxiliary 
 */
__sfr  __at (0x8E) AUXR     ;
#define ALEOFF 0
#define EXTRAM 1

/*
 * Port 1
 */
__sfr  __at (0x90) P1       ;
__sbit __at (0x90) P1_0     ;
__sbit __at (0x91) P1_1     ;
__sbit __at (0x92) P1_2     ;
__sbit __at (0x93) P1_3     ;
__sbit __at (0x94) P1_4     ;
__sbit __at (0x95) P1_5     ;
__sbit __at (0x96) P1_6     ;
__sbit __at (0x97) P1_7     ;

/*
 * Serial Config
 */
__sfr  __at (0x98) SCON     ;
__sbit __at (0x98) RI       ;
__sbit __at (0x99) TI       ;
__sbit __at (0x9A) RB8      ;
__sbit __at (0x9B) TB8      ;
__sbit __at (0x9C) REN      ;
__sbit __at (0x9D) SM2      ;
__sbit __at (0x9E) SM1      ;
__sbit __at (0x9F) SM0      ;

/*
 * Serial Buff
 */
__sfr  __at (0x99) SBUF     ;
#define SBUF_0 0
#define SBUF_1 1
#define SBUF_2 2
#define SBUF_3 3
#define SBUF_4 4
#define SBUF_5 5
#define SBUF_6 6
#define SBUF_7 7

/*
 * Port 2
 */
__sfr  __at (0xA0) P2       ;
__sbit __at (0xA0) P2_0     ;
__sbit __at (0xA1) P2_1     ;
__sbit __at (0xA2) P2_2     ;
__sbit __at (0xA3) P2_3     ;
__sbit __at (0xA4) P2_4     ;
__sbit __at (0xA5) P2_5     ;
__sbit __at (0xA6) P2_6     ;
__sbit __at (0xA7) P2_7     ;

/*
 * Auxiliary 1
 */
__sfr  __at (0xA2) AUXR1    ;
#define DPS 0
#define GF2 3

/*
 * Interrupt Enable
 */
__sfr  __at (0xA8) IE       ;
__sbit __at (0xA8) EX0      ;
__sbit __at (0xA9) ET0      ;
__sbit __at (0xAA) EX1      ;
__sbit __at (0xAB) ET1      ;
__sbit __at (0xAC) ES       ;
__sbit __at (0xAD) ET2      ;
__sbit __at (0xAF) EA       ;

/*
 * Serial Slave Address
 */
__sfr  __at (0xA9) SADDR    ;
#define SADDR_0 0
#define SADDR_1 1
#define SADDR_2 2
#define SADDR_3 3
#define SADDR_4 4
#define SADDR_5 5
#define SADDR_6 6
#define SADDR_7 7

/*
 * Port 3
 */
__sfr  __at (0xB0) P3       ;
__sbit __at (0xB0) P3_0     ;
__sbit __at (0xB1) P3_1     ;
__sbit __at (0xB2) P3_2     ;
__sbit __at (0xB3) P3_3     ;
__sbit __at (0xB4) P3_4     ;
__sbit __at (0xB5) P3_5     ;
__sbit __at (0xB6) P3_6     ;
__sbit __at (0xB7) P3_7     ;

/*
 * Interrupt Priority High
 */
__sfr  __at (0xB7) IPH      ;
#define PX0H 0
#define PT0H 1
#define PX1H 2
#define PT1H 3
#define PSH  4
#define PT2H 5
#define PX0H 6
#define PX3H 7

/*
 * Interrupt Priority
 */
__sfr  __at (0xB8) IP       ;
__sbit __at (0xB8) PX0      ;
__sbit __at (0xB9) PT0      ;
__sbit __at (0xBA) PX1      ;
__sbit __at (0xBB) PT1      ;
__sbit __at (0xBC) PS       ;
__sbit __at (0xBD) PT2      ;


__sfr  __at (0xB9) SADEN    ;

/*
 * Auxiliary Interrupt Config
 */
__sfr  __at (0xC0) XICON    ;
__sbit __at (0xC0) IT2      ;
__sbit __at (0xC1) IE2      ;
__sbit __at (0xC2) EX2      ;
__sbit __at (0xC3) PX2      ;
__sbit __at (0xC4) IT3      ;
__sbit __at (0xC5) IE3      ;
__sbit __at (0xC6) EX3      ;
__sbit __at (0xC7) PX3      ;

/*
 * Timer 2 Config
 */
__sfr  __at (0xC8) T2CON    ;
__sbit __at (0xC8) CPRL2    ;
__sbit __at (0xC9) T2_CT    ;
__sbit __at (0xCA) TR2      ;
__sbit __at (0xCB) EXEN2    ;
__sbit __at (0xCC) TCLK     ;
__sbit __at (0xCD) RCLK     ;
__sbit __at (0xCE) EXF2     ;
__sbit __at (0xCF) TF2      ;

/*
 * Timer 2 Mode
 */
__sfr  __at (0xC9) T2MOD    ;
#define DCEN 0
#define T2OE 1

__sfr  __at (0xCA) RCAP2L   ;
#define RCAP2L_0 0
#define RCAP2L_1 1
#define RCAP2L_2 2
#define RCAP2L_3 3
#define RCAP2L_4 4
#define RCAP2L_5 5
#define RCAP2L_6 6
#define RCAP2L_7 7
__sfr  __at (0xCB) RCAP2H   ;
#define RCAP2H_0 0
#define RCAP2H_1 1
#define RCAP2H_2 2
#define RCAP2H_3 3
#define RCAP2H_4 4
#define RCAP2H_5 5
#define RCAP2H_6 6
#define RCAP2H_7 7

/*
 * Timer 2 Low
 */
__sfr  __at (0xCC) TL2      ;
#define TL2_0 0
#define TL2_1 1
#define TL2_2 2
#define TL2_3 3
#define TL2_4 4
#define TL2_5 5
#define TL2_6 6
#define TL2_7 7

/*
 * Timer 2 High
 */
__sfr  __at (0xCD) TH2      ;
#define TH2_0 0
#define TH2_1 1
#define TH2_2 2
#define TH2_3 3
#define TH2_4 4
#define TH2_5 5
#define TH2_6 6
#define TH2_7 7

/*
 * Program Status Register
 */
__sfr  __at (0xD0) PSW      ;
__sbit __at (0xD0) P        ;
__sbit __at (0xD1) F1       ;
__sbit __at (0xD2) OV       ;
__sbit __at (0xD3) RS0      ;
__sbit __at (0xD4) RS1      ;
__sbit __at (0xD5) F0       ;
__sbit __at (0xD6) AC       ;
__sbit __at (0xD7) CY       ;

/*
 * Accumulator
 */
__sfr  __at (0xE0) ACC      ;
#define ACC_0 0
#define ACC_1 1
#define ACC_2 2
#define ACC_3 3
#define ACC_4 4
#define ACC_5 5
#define ACC_6 6
#define ACC_7 7

/*
 * Watch Dog Config
 */
__sfr  __at (0xE1) WDT_CONTR;
#define PS0 0
#define PS1 1
#define PS2 2
#define IDLE_WDT 3
#define CLR_WDT 4
#define EN_WDT 5

/*
 * Isp Data
 */
__sfr  __at (0xE2) ISP_DATA ;
#define ISP_DATA_0 0
#define ISP_DATA_1 1
#define ISP_DATA_2 2
#define ISP_DATA_3 3
#define ISP_DATA_4 4
#define ISP_DATA_5 5
#define ISP_DATA_6 6
#define ISP_DATA_7 7

/*
 * Isp Address High
 */
__sfr  __at (0xE3) ISP_ADDRH;
#define ISP_ADDRH_0 0
#define ISP_ADDRH_1 1
#define ISP_ADDRH_2 2
#define ISP_ADDRH_3 3
#define ISP_ADDRH_4 4
#define ISP_ADDRH_5 5
#define ISP_ADDRH_6 6
#define ISP_ADDRH_7 7

/*
 * Isp Address
 */
__sfr  __at (0xE4) ISP_ADDR ;
#define ISP_ADDR_0 0
#define ISP_ADDR_1 1
#define ISP_ADDR_2 2
#define ISP_ADDR_3 3
#define ISP_ADDR_4 4
#define ISP_ADDR_5 5
#define ISP_ADDR_6 6
#define ISP_ADDR_7 7

/*
 * Isp Cmd
 */
__sfr  __at (0xE5) ISP_CMD  ;
#define MS0 0
#define MS1 1
#define MS2 2

/*
 * Isp Trig
 */
__sfr  __at (0xE6) ISP_TRIG ;
#define ISP_TRIG_0 0
#define ISP_TRIG_1 1
#define ISP_TRIG_2 2
#define ISP_TRIG_3 3
#define ISP_TRIG_4 4
#define ISP_TRIG_5 5
#define ISP_TRIG_6 6
#define ISP_TRIG_7 7

/*
 * Isp Config
 */
__sfr  __at (0xE7) ISP_CONTR;
#define WT0 0
#define WT1 1
#define WT2 2
#define SWRST 5
#define SWBS 6
#define ISPEN 7

/*
 * Port 4
 */
__sfr  __at (0xE8) P4       ;
__sbit __at (0xE8) P4_0     ;
__sbit __at (0xE9) P4_1     ;
__sbit __at (0xEA) P4_2     ;
__sbit __at (0xEB) P4_3     ;

/*
 * B Register
 */
__sfr __at (0xF0) B         ;



#endif
