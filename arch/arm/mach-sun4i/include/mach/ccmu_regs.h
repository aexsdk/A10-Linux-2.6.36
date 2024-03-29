/*
*********************************************************************************************************
*                                                    LINUX-KERNEL
*                                        AllWinner Linux Platform Develop Kits
*                                                   Kernel Module
*
*                                    (c) Copyright 2006-2011, kevin.z China
*                                             All Rights Reserved
*
* File    : ccmu_regs.h
* By      : kevin.z
* Version : v1.0
* Date    : 2011-5-13 16:42
* Descript: define registers for ccmu.
* Update  : date                auther      ver     notes
*********************************************************************************************************
*/
#ifndef __CCMU_REGS_H__
#define __CCMU_REGS_H__


typedef struct ___CCMU_PLL1_CORE_REG0000
{
    __u32   FactorM:2;          //bit0,  PLL1 Factor M
    __u32   SigmaEn:1;          //bit2,  Sigma-delta pattern enable
    __u32   SigmaIn:1;          //bit3,  Sigma-delta pattern input
    __u32   FactorK:2;          //bit4,  PLL1 factor K
    __u32   reserved0:2;        //bit6,  reserved
    __u32   FactorN:5;          //bit8,  PLL1 Factor N
    __u32   LockTime:3;         //bit13, PLL1 lock timer control
    __u32   PLLDivP:2;          //bit16, PLL1 output external divider P
    __u32   reserved1:2;        //bit18, reserved
    __u32   PLLBias:5;          //bit20, PLL1 bias current control
    __u32   ExchangeEn:1;       //bit25, PLL1 exchange with PLL4 Enable
    __u32   VCOBias:4;          //bit26, PLL1 VCO bias control
    __u32   VCORstIn:1;         //bit30, VCO reset in
    __u32   PLLEn:1;            //bit31, 0-disable, 1-enable, (24Mhz*N*K)/(M*P)

} __ccmu_pll1_core_reg0000_t;

typedef struct __CCMU_PLL1_TUNING_REG0004
{
    __u32   reserved0:16;       //bit0,  reserved for verify
    __u32   InitFreq:7;         //bit16, PLL1 initial frequency control
    __u32   VCOGain:1;          //bit26, VCO Gain Control Enable
    __u32   BandWidth:1;        //bit27, PLL1 band width control
    __u32   DampFactor:4;       //bit28, PLL1 damping factor control
} __ccmu_pll1_tuning_reg0004_t;


typedef struct __CCMU_PLL2_AUDIO_REG0008
{
    __u32   VCOBias:5;          //bit0,  PLL2 VCO bias current
    __u32   reserved0:3;        //bit5,  reserved
    __u32   FactorN:7;          //bit8,  PLL2 factor N
    __u32   reserved1:1;        //bit15, reserved
    __u32   PLLBias:5;          //bit16, PLL2 bias current
    __u32   reserved2:7;        //bit21, reserved
    __u32   SigmaOut:1;         //bit28, PLL2 sigma delta output
    __u32   reserved3:2;        //bit29, reserved
    __u32   PLLEn:1;            //bit31, PLL2 enable
} __ccmu_pll2_audio_reg0008_t;


typedef struct __CCMU_PLL2_TUNING_REG000C
{
    __u32   WaveBottom:17;      //bit0,  wave bottom
    __u32   Frequency:2;        //bit17, frequency, 00-31.5k, 01-32k, 10-32.5k, 11-33k
    __u32   reserved0:1;        //bit19, reserved
    __u32   WaveStep:9;         //bit20, wave step
    __u32   FreqMode:2;         //bit29, Spred frequency mode
    __u32   SigmaEn:1;          //bit31, Sigma-delta pattern enable

} __ccmu_pll2_tuning_reg000c_t;


typedef struct __CCMU_PLL3_VIDEO_REG0010
{
    __u32   FactorM:7;          //bit0,  PLL3 FactorM, 9<= M <=127
    __u32   reserved0:1;        //bit7,  reserved
    __u32   PLLBias:5;          //bit8,  PLL3 bias control
    __u32   reserved1:1;        //bit13, reserved
    __u32   FracSet:1;          //bit14, PLL3 fractional setting, 0-270Mhz, 1-297Mhz
    __u32   ModeSel:1;          //bit15, PLL3 mode select
    __u32   VCOBias:5;          //bit16, PLL3 VCO Bias control
    __u32   reserved2:3;        //bit21, reserved
    __u32   DampFactor:3;       //bit24, PLL3 damping factor controlf
    __u32   reserved3:4;        //bit27, reserved
    __u32   PLLEn:1;            //bit31, PLL3 enable
} __ccmu_pll3_video_reg0010_t;


typedef struct __CCMU_PLL4_VE_REG0018
{
    __u32   FactorM:2;          //bit0,  PLL4 factor M
    __u32   reserved0:2;        //bit2,  reserved
    __u32   FactorK:2;          //bit4,  PLL4 factor K
    __u32   reserved1:2;        //bit6,  reserved
    __u32   FactorN:5;          //bit8,  PLL4 factor N
    __u32   reserved2:3;        //bit13, reserved
    __u32   FactorP:2;          //bit16, PLL4 output external divider P
    __u32   reserved3:1;        //bit18, reserved
    __u32   VCOGain:1;          //bit19, PLL4 VCO gain control
    __u32   PLLBias:5;          //bit20, PLL4 Bias control
    __u32   VCOBias:5;          //bit25, PLL4 VCO bias control
    __u32   PLLBypass:1;        //bit30, PLL4 output bypass enable
    __u32   PLLEn:1;            //bit31, PLL4 Enable, 24MHz*N*K/(M*P)
} __ccmu_pll4_ve_reg0018_t;


typedef struct __CCMU_PLL5_DDR_REG0020
{
    __u32   FactorM:2;          //bit0,  PLL5 factor M
    __u32   FactorM1:2;         //bit3,  PLL5 factor M1
    __u32   FactorK:2;          //bit4,  PLL5 factor K
    __u32   reserved0:1;        //bit6,  reserved
    __u32   LDO2En:1;           //bit7,  LDO2 enable
    __u32   FactorN:5;          //bit8,  PLL5 factor N
    __u32   VCOGain:3;          //bit13, PLL5 VCO gain control
    __u32   FactorP:2;          //bit16, PLL5 output external divider P
    __u32   BandWidth:1;        //bit18, PLL5 band width control, 0-narrow, 1-wide
    __u32   VCOGainEn:1;        //bit19, PLL5 VCO gain control enable
    __u32   PLLBias:5;          //bit20, PLL5 bias current control
    __u32   VCOBias:4;          //bit25, PLL5 VCO bias
    __u32   OutputEn:1;         //bit29, DDR clock output enable
    __u32   PLLBypass:1;        //bit30, PLL5 output bypass enable
    __u32   PLLEn:1;            //bit31, PLL5 Enable
} __ccmu_pll5_ddr_reg0020_t;


typedef struct __CCMU_PLL5_TUNING_REG0024
{
    __u32   reserved0:16;       //bit0,  reserved for verify
    __u32   InitFreq:7;         //bit16, PLL5 initial frequency control
    __u32   VCORstIn:1;         //bit23, VCO reset in
    __u32   LockTime:3;         //bit24, PLL5 lock time control
    __u32   reserved1:1;        //bit27, reserved
    __u32   Vreg1OutEn:1;       //bit28, vreg1 out enable
    __u32   DampFactor:3;       //bit29, PLL5 damping factor control
} __ccmu_pll5_tuning_reg0024_t;

typedef struct __CCMU_PLL6_SATA_REG0028
{
    __u32   FactorM:2;          //bit0,  PLL6 factor M
    __u32   reserved0:2;        //bit2,  reserved
    __u32   FactorK:2;          //bit4,  PLL6 factor K
    __u32   DampFactor:2;       //bit6,  PLL6 damping factor control
    __u32   FactorN:5;          //bit8,  PLL6 factor N
    __u32   reserved1:1;        //bit13, reserved
    __u32   OutputEn:1;         //bit14, sata clock output enable
    __u32   BandWidth:1;        //bit15, PLL6 band width control
    __u32   reserved2:4;        //bit16, reserved
    __u32   PLLBias:5;          //bit20, PLL6 bias current control
    __u32   VCOBias:5;          //bit25, PLL6 VCO bias
    __u32   PLLBypass:1;        //bit30, PLL6 output bypass enable
    __u32   PLLEn:1;            //bit31, PLL6 enable
} __ccmu_pll6_sata_reg0028_t;


typedef struct __CCMU_PLL7_VIDEO1_REG0030
{
    __u32   FactorM:7;          //bit0,  PLL7 factor M
    __u32   reserved0:1;        //bit7,  reserved
    __u32   PLLBias:5;          //bit8,  PLL7 bias control
    __u32   reserved1:1;        //bit13, reserved
    __u32   FracSet:1;          //bit14, PLL7 fractional setting, 0-270Mhz, 1-297Mhz
    __u32   ModeSel:1;          //bit15, PLL7 mode select, 0-integer, 1-fractional
    __u32   VCOBias:5;          //bit16, PLL7 bias control
    __u32   reserved2:3;        //bit21, reserved
    __u32   DampFactor:3;       //bit24, PLL7 damping factor control
    __u32   reserved3:4;        //bit27, reserved
    __u32   PLLEn:1;            //bit31, PLL7 enable
} __ccmu_pll7_video1_reg0030_t;


typedef struct __CCMU_PLL1_TUNING2_REG0038
{
    __u32   WaveBottom:17;      //bit0,  Wave bottom
    __u32   Frequency:2;        //bit17, frequency, 00-31.5khz, 01-32khz, 10-32.5khz, 11-33khz
    __u32   reserved0:1;        //bit19, reserved
    __u32   WaveStep:9;         //bit20, Wave step
    __u32   FreqMode:2;         //bit29, Spread frequency mode
    __u32   SigmaEn:1;          //bit31, Sigma-delta pattern enable
} __ccmu_pll1_tuning2_reg0038_t;


typedef struct __CCMU_PLL5_TUNING2_REG003C
{
    __u32   WaveBottom:17;      //bit0,  wave bottom
    __u32   Frequency:2;        //bit17, frequency, 00-31.5khz, 01-32khz, 10-32.5khz, 11-33khz
    __u32   reserved0:1;        //bit19, reserved
    __u32   WaveStep:9;         //bit20, wave step
    __u32   FreqMode:2;         //bit29, Spread frequency mode
    __u32   SigmaEn:1;          //bit31, sigma-delta pattern enable
} __ccmu_pll5_tuning2_reg003c_t;


typedef struct __CCMU_OSC24M_REG0050
{
    __u32   OSC24MEn:1;         //bit0,  OSC24M enable
    __u32   OSC24MGsm:1;        //bit1,  OSC24M GSM
    __u32   reserved0:13;       //bit2,  reserved
    __u32   PLLBiasEn:1;        //bit15, PLL bias enable
    __u32   LDOEn:1;            //bit16, LDO enable
    __u32   PLLInPower:1;       //bit17, PLL intput power select, 0-2.5v, 1-3.3v
    __u32   LDOOutput:3;        //bit18, LDO output control, 100-1.25v for ex.
    __u32   KeyField:11;        //bit21, key field for LDO enable, 0x538, bit24~bit31 is valid, but "strb" will do nothing
} __ccmu_osc24m_reg0050_t;


typedef struct __CCMU_SYSCLK_RATIO_REG0054
{
    __u32   AXIClkDiv:2;        //bit0,  AXI clock divide ratio, 00-1, 01-2, 10-3, 11-4
    __u32   reserved0:2;        //bit2,  reserved
    __u32   AHBClkDiv:2;        //bit4,  AHB clock divide ration, AHB clock source is AXI clock, 00-1, 01-2, 10-4, 11-8
    __u32   reserved1:2;        //bit6,  reserved
    __u32   APB0ClkDiv:2;       //bit8,  APB0 clock divide ratio, APB0 clock source is AHB, 00-2, 01-2, 10-4, 11-8
    __u32   reserved2:6;        //bit10, reserved
    __u32   AC328ClkSrc:2;      //bit16, AC328 clock source select, 00-LOSC, 01-HOSC, 10-PLL, 11-200M
    __u32   reserved3:14;       //bit18, reserved
} __ccmu_sysclkl_ratio_reg0054_t;

typedef struct __CCMU_APB1CLK_RATIO_REG0058
{
    __u32   ClkDiv:5;           //bit0,  clock divide ratio, diveded by (m+1), 1~32 ex.
    __u32   reserved0:11;       //bit5,  reserved
    __u32   PreDiv:2;           //bit16, clock pre-divide ratio, pre-devided by 2^, 1/2/4/8 ex.
    __u32   reserved1:6;        //bit18, reserved
    __u32   ClkSrc:2;           //bit24, clock source select, 00-HOSC, 01-PLL6, 10-LOSC, 11-reserved
    __u32   reserved2:6;        //bit26, reserved
} __ccmu_apb1clk_ratio_reg0058_t;


typedef struct __CCMU_AXICLK_GATE_REG005c
{
    __u32   SdramGate:1;        //bit0,  gating AXI clock for SDRAM, 0-mask, 1-pass
    __u32   reserved0:31;       //bit1,  reserved
} __ccmu_axiclk_gate_reg005c_t;


typedef struct __CCMU_AHBCLK_GATE0_REG0060
{
    __u32   Usb0Gate:1;         //bit0,  gating AHB clock for USB0, 0-mask, 1-pass
    __u32   Ehci0Gate:1;        //bit1,  gating AHB clock for EHCI0, 0-mask, 1-pass
    __u32   Ohci0Gate:1;        //bit2,  gating AHB clock for OHCI0, 0-mask, 1-pass
    __u32   Ehci1Gate:1;        //bit3,  gating AHB clock for EHCI1, 0-mask, 1-pass
    __u32   Ohci1Gate:1;        //bit4,  gating AHB clock for OHCI1, 0-mask, 1-pass
    __u32   SsGate:1;           //bit5,  gating AHB clock for SS, 0-mask, 1-pass
    __u32   DmaGate:1;          //bit6,  gating AHB clock for DMA, 0-mask, 1-pass
    __u32   BistGate:1;         //bit7,  gating AHB clock for BIST, 0-mask, 1-pass
    __u32   Sdmmc0Gate:1;       //bit8,  gating AHB clock for SD/MMC0, 0-mask, 1-pass
    __u32   Sdmmc1Gate:1;       //bit9,  gating AHB clock for SD/MMC1, 0-mask, 1-pass
    __u32   Sdmmc2Gate:1;       //bit10, gating AHB clock for SD/MMC2, 0-mask, 1-pass
    __u32   Sdmmc3Gate:1;       //bit11, gating AHB clock for SD/MMC3, 0-mask, 1-pass
    __u32   MsGate:1;           //bit12, gating AHB clock for MS, 0-mask, 1-pass
    __u32   NandGate:1;         //bit13, gating AHB clock for NAND, 0-mask, 1-pass
    __u32   SdramGate:1;        //bit14, gating AHB clock for SDRAM, 0-mask, 1-pass
    __u32   reserved2:1;        //bit15, reserved
    __u32   AceGate:1;          //bit16, gating AHB clock for ACE, 0-mask, 1-pass
    __u32   EmacGate:1;         //bit17, gating AHB clock for EMAC, 0-mask, 1-pass
    __u32   TsGate:1;           //bit18, gating AHB clock for TS, 0-mask, 1-pass
    __u32   reserved3:1;        //bit19, reserved
    __u32   Spi0Gate:1;         //bit20, gating AHB clock for SPI0, 0-mask, 1-pass
    __u32   Spi1Gate:1;         //bit21, gating AHB clock for SPI1, 0-mask, 1-pass
    __u32   Spi2Gate:1;         //bit22, gating AHB clock for SPI2, 0-mask, 1-pass
    __u32   Spi3Gate:1;         //bit23, gating AHB clock for SPI3, 0-mask, 1-pass
    __u32   PataGate:1;         //bit24, gating AHB clock for PATA, 0-mask, 1-pass
    __u32   SataGate:1;         //bit25, gating AHB clock for SATA, 0-mask, 1-pass
    __u32   GpsGate:1;          //bit26, gating AHB clock for GPS, 0-mask, 1-pass
    __u32   reserved4:5;        //bit27, reserved
} __ccmu_ahbclk_gate0_reg0060_t;


typedef struct __CCMU_AHBCLK_GATE1_REG0064
{
    __u32   VeGate:1;           //bit0,  gating AHB clock for VE, 0-mask, 1-pass
    __u32   TvdGate:1;          //bit1,  gating AHB clock for TVD, 0-mask, 1-pass
    __u32   Tve0Gate:1;         //bit2,  gating AHB clock for TVE0, 0-mask, 1-pass
    __u32   Tve1Gate:1;         //bit3,  gating AHB clock for TVE1, 0-mask, 1-pass
    __u32   Lcd0Gate:1;         //bit4,  gating AHB clock for LCD0, 0-mask, 1-pass
    __u32   Lcd1Gate:1;         //bit5,  gating AHB clock for LCD1, 0-mask, 1-pass
    __u32   reserved0:2;        //bit6,  reserved
    __u32   Csi0Gate:1;         //bit8,  gating AHB clock for CSI0, 0-mask, 1-pass
    __u32   Csi1Gate:1;         //bit9,  gating AHB clock for CSI1, 0-mask, 1-pass
    __u32   reserved1:1;        //bit10, reserved
    __u32   HdmiDGate:1;        //bit11, gating AHB clock for HDMI, 0-mask, 1-pass
    __u32   DeBe0Gate:1;        //bit12, gating AHB clock for DE-BE0, 0-mask, 1-pass
    __u32   DeBe1Gate:1;        //bit13, gating AHB clock for DE-BE1, 0-mask, 1-pass
    __u32   DeFe0Gate:1;        //bit14, gating AHB clock for DE-FE0, 0-mask, 1-pass
    __u32   DeFe1Gate:1;        //bit15, gating AHB clock for DE-FE1, 0-mask, 1-pass
    __u32   reserved2:2;        //bit16, reserved
    __u32   MpGate:1;           //bit18, gating AHB clock for MP, 0-mask, 1-pass
    __u32   reserved3:1;        //bit19, reserved
    __u32   Gpu3DGate:1;        //bit20, gating AHB clock for GPU-3D, 0-mask, 1-pass
    __u32   reserved4:11;       //bit21, reserved
} __ccmu_ahbclk_gate1_reg0064_t;


typedef struct __CCMU_APB0CLK_GATE_REG0068
{
    __u32   AddaGate:1;         //bit0,  gating APB clock for audio codec, 0-mask, 1-pass
    __u32   SpdifGate:1;        //bit1,  gating APB clock for SPDIF, 0-mask, 1-pass
    __u32   Ac97Gate:1;         //bit2,  gating APB clock for AC97, 0-mask, 1-pass
    __u32   IisGate:1;          //bit3,  gating APB clock for IIS, 0-mask, 1-pass
    __u32   reserved0:1;        //bit4,  reserved
    __u32   PioGate:1;          //bit5,  gating APB clock for PIO, 0-mask, 1-pass
    __u32   Ir0Gate:1;          //bit6,  gating APB clock for IR0, 0-mask, 1-pass
    __u32   Ir1Gate:1;          //bit7,  gating APB clock for IR1, 0-mask, 1-pass
    __u32   reserved1:2;        //bit8,  reserved
    __u32   KeypadGate:1;       //bit10, gating APB clock for keypad, 0-mask, 1-pass
    __u32   reserved2:21;       //bit11, reserved
} __ccmu_apb0clk_gate_reg0068_t;


typedef struct __CCMU_APB1CLK_GATE_REG006C
{
    __u32   Twi0Gate:1;         //bit0,  gating APB clock for TWI0, 0-mask, 1-pass
    __u32   Twi1Gate:1;         //bit1,  gating APB clock for TWI1, 0-mask, 1-pass
    __u32   Twi2Gate:1;         //bit2,  gating APB clock for TWI2, 0-mask, 1-pass
    __u32   reserved0:1;        //bit3,  reserved
    __u32   CanGate:1;          //bit4,  gating APB clock for CAN, 0-mask, 1-pass
    __u32   ScrGate:1;          //bit5,  gating APB clock for SCR, 0-mask, 1-pass
    __u32   Ps20Gate:1;         //bit6,  gating APB clock for PS2-0, 0-mask, 1-pass
    __u32   Ps21Gate:1;         //bit7,  gating APB clock for PS2-1, 0-mask, 1-pass
    __u32   reserved1:8;        //bit8,  reserved
    __u32   Uart0Gate:1;        //bit16, gating APB clock for UART0, 0-mask, 1-pass
    __u32   Uart1Gate:1;        //bit17, gating APB clock for UART1, 0-mask, 1-pass
    __u32   Uart2Gate:1;        //bit18, gating APB clock for UART2, 0-mask, 1-pass
    __u32   Uart3Gate:1;        //bit19, gating APB clock for UART3, 0-mask, 1-pass
    __u32   Uart4Gate:1;        //bit20, gating APB clock for UART4, 0-mask, 1-pass
    __u32   Uart5Gate:1;        //bit21, gating APB clock for UART5, 0-mask, 1-pass
    __u32   Uart6Gate:1;        //bit22, gating APB clock for UART6, 0-mask, 1-pass
    __u32   Uart7Gate:1;        //bit23, gating APB clock for UART7, 0-mask, 1-pass
    __u32   reserved2:8;        //bit24, reserved
} __ccmu_apb1clk_gate_reg006c_t;


/* module clock type 0, used for NAND, MS, SDMMC0/1/2/3, TS, SS, SPI0/1/2/3, PATA, IR0/1, */
/* register address is 0x0080~0x00B4, 0x00D4 */
typedef struct __CCMU_MODULE0_CLK
{
    __u32   ClkDiv:4;           //bit0,  clock divide ratio, divided by (m+1), 1~16 ex.
    __u32   reserved0:12;       //bit4,  reserved
    __u32   ClkPreDiv:2;        //bit16, clock pre-divide ratio, predivided by 2^n , 1/2/4/8 ex.
    __u32   reserved1:6;        //bit18, reserved
    __u32   ClkSrc:2;           //bit24, clock source select, 00-HOSC, 01-PLL6, 10-PLL5, 11-reserved
    __u32   reserved2:5;        //bit26, reserved
    __u32   SpecClkGate:1;      //bit31, Gating special clock, 0-CLOCK OFF, 1-CLOCK ON
} __ccmu_module0_clk_t;


/* module clock type 1, used for IIS, AC97, SPDIF*/
/* register address is 0x00B8~0x00C0 */
typedef struct __CCMU_MODULE1_CLK
{
    __u32   reserved0:16;       //bit0,  reserved
    __u32   ClkDiv:2;           //bit16, clock pre-divide ratio, predivided by 2^n , 1/2/4/8 ex. source is 8xPLL2
    __u32   reserved1:13;       //bit18, reserved
    __u32   SpecClkGate:1;      //bit31, Gating special clock, 0-CLOCK OFF, 1-CLOCK ON

} __ccmu_module1_clk_t;


typedef struct __CCMU_KEYPAD_CLK_REG00C4
{
    __u32   ClkDiv:5;           //bit0,  clock divide ratio
    __u32   reserved0:11;       //bit5,  reserved
    __u32   ClkPreDiv:2;        //bit16, clock pre-divide ratio, pre-divided by 2^n, 1/2/4/8 ex.
    __u32   reserved1:6;        //bit18, reserved
    __u32   ClkSrc:2;           //bit24, clock select, 00-HOSC, 01-reserved, 10-LOSC, 11-reserved
    __u32   reserved2:5;        //bit26, reserved
    __u32   SpecClkGate:1;      //bit31, gating special clock, 0-CLOCK OFF, 1-CLOCK ON
} __ccmu_keypad_clk_reg00c4_t;


typedef struct __CCMU_SATA_CLK_REG00C8
{
    __u32   reserved0:24;       //bit0,  reserved
    __u32   ClkSrc:1;           //bit24, Clock source select, 0-PLL6, 1-External clock
    __u32   reserved1:6;        //bit25, reserved
    __u32   SpecClkGate:1;      //bit31, gating special clock, 0-CLOCK OFF, 1-CLOCK ON
} __ccmu_sata_clk_reg00c8_t;


typedef struct __CCMU_USB_CLK_REG00CC
{
    __u32   UsbPhy0Rst:1;       //bit0,  USB PHY0 reset control, 0-reset valid, 1-reset invalid
    __u32   UsbPhy1Rst:1;       //bit1,  USB PHY1 reset control, 0-reset valid, 1-reset invalid
    __u32   UsbPhy2Rst:1;       //bit2,  USB PHY2 reset control, 0-reset valid, 1-reset invalid
    __u32   reserved0:1;        //bit3,  reserved
    __u32   OHCIClkSrc:1;       //bit4,  0-(PLL6)/25, 1-PLL6 sample 24Mhz to generate 48Mhz
    __u32   reserved1:1;        //bit5,  reserved
    __u32   OHCI0SpecClkGate:1; //bit6,  gating special clock for OHCI0, 0-CLOCK OFF, 1-CLOCK ON
    __u32   OHCI1SpecClkGate:1; //bit7,  gating special clock for OHCI1, 0-CLOCK OFF, 1-CLOCK ON
    __u32   PhySpecClkGate:1;   //bit8,  gating special clock for USB PHY0/1/2, 0-CLOCK OFF, 1-CLOCK ON
    __u32   reserved2:23;       //bit9,  reserved
} __ccmu_usb_clk_reg00cc_t;


typedef struct __CCMU_GPS_CLK_REG00D0
{
    __u32   Reset:1;            //bit0,  GPS reset control, clock source for GPS is AHB clock
    __u32   SpecClkGate:1;      //bit1,  gating special clock for GPS, 0-CLOCK OFF, 1-CLOCK ON
    __u32   reserved:30;        //bit2,  reserved
} __ccmu_gps_clk_reg00d0_t;


typedef struct __CCMU_DRAM_GATE_REG0100
{
    __u32   VeGate:1;           //bit0,  Gating dram clock for VE, 0-mask, 1-pass
    __u32   Csi0Gate:1;         //bit1,  Gating dram clock for CSI0, 0-mask, 1-pass
    __u32   Csi1Gate:1;         //bit2,  Gating dram clock for CSI1, 0-mask, 1-pass
    __u32   TsGate:1;           //bit3,  Gating dram clock for TS, 0-mask, 1-pass
    __u32   TvdGate:1;          //bit4,  Gating dram clock for TVD, 0-mask, 1-pass
    __u32   Tve0Gate:1;         //bit5,  Gating dram clock for TVE0, 0-mask, 1-pass
    __u32   Tve1Gate:1;         //bit6,  Gating dram clock for TVE1, 0-mask, 1-pass
    __u32   reserved0:8;        //bit7,  reserved
    __u32   ClkOutputEn:1;      //bit15, DRAM clock output enable, 0-disable, 1-enable
    __u32   reserved1:8;        //bit16, reserved
    __u32   DeFe1Gate:1;        //bit24, Gating dram clock for DE_FE1, 0-mask, 1-pass
    __u32   DeFe0Gate:1;        //bit25, Gating dram clock for DE_FE0, 0-mask, 1-pass
    __u32   DeBe0Gate:1;        //bit26, Gating dram clock for DE_BE0, 0-mask, 1-pass
    __u32   DeBe1Gate:1;        //bit27, Gating dram clock for DE_BE1, 0-mask, 1-pass
    __u32   DeMpGate:1;         //bit28, Gating dram clock for DE_MP, 0-mask, 1-pass
    __u32   AceGate:1;          //bit29, Gating dram clock for ACE, 0-mask, 1-pass
    __u32   reserved2:2;        //bit30, reserved
} __ccmu_dram_gate_reg0100_t;


/* FEBEMP module clock type, used for DE-BE0, DE-BE1, DE-FE0, DE-FE1, DE-MP */
/* register address is 0x0104~0x0114 */
typedef struct __CCMU_FEDEMP_CLK
{
    __u32   ClkDiv:4;           //bit0,  clock divide ratio, divied by (m+1), 1~16 ex.
    __u32   reserved0:20;       //bit4,  reserved
    __u32   ClkSrc:2;           //bit24, clock source select, 00-PLL3, 01-PLL7, 10-PLL5, 11-reserved
    __u32   reserved1:4;        //bit26, reserved
    __u32   Reset:1;            //bit30, module reset, 0-reset valid, 1-reset invalid
    __u32   SpecClkGate:1;      //bit31, gating special clock, 0-clock off, 1-clock on

} __ccmu_fedemp_clk_t;


/* LCDCH0 module clock type, used for LCD0_CH0, LCD1_CH0 */
/* register address is 0x0118~0x011C */
typedef struct __CCMU_LCDCH0_CLK
{
    __u32   reserved0:24;       //bit0,  reserved
    __u32   ClkSrc:2;           //bit24, clock source select, 00-PLL3(1x), 01-PLL7(1x), 10-PLL3(2x), 11-PLL7(2x)
    __u32   reserved1:4;        //bit26, reserved
    __u32   Reset:1;            //bit30, module reset, 0-reset valid, 1-reset invalid
    __u32   SpecClkGate:1;      //bit31, gating special clock, 0-clock off, 1-clock on

} __ccmu_lcdch0_clk_t;


typedef struct __CCMU_CSIISP_CLK_REG0120
{
    __u32   ClkDiv:4;           //bit0,  clock divide ratio, divided by (m+1), 1~16 ex.
    __u32   reserved0:20;       //bit4,  reserved
    __u32   ClkSrc:2;           //bit24, special clock2 source select, 00-PLL3(1x), 01-PLL4, 10-PLL5, 11-PLL6
    __u32   reserved1:5;        //bit26, reserved
    __u32   SpecClkGate:1;      //bit31, gating special clock, 0-clock off, 1-clock on
} __ccmu_csiisp_clk_reg0120_t;

typedef struct __CCMU_TVD_CLK_REG0128
{
    __u32   reserved0:24;       //bit0,  reserved
    __u32   ClkSrc:1;           //bit24, clock source select, 0-PLL3, 1-PLL7
    __u32   reserved1:6;        //bit25, reserved
    __u32   SpecClkGate:1;      //bit31, gating special clock, 0-clock off, 1-clock on
} __ccmu_tvd_clk_reg0128_t;


/* LCD-CH1 module clock type, used for LCD0_CH1, LCD1_CH1 */
/* register address is 0x012C~0x0130 */
typedef struct __CCMU_LCDCH1_CLK
{
    __u32   ClkDiv:4;           //bit0,  clock division
    __u32   reserved0:7;        //bit4,  reserved
    __u32   SpecClk1Src:1;      //bit11, special clock 1 source select, 0-special clock2,
    __u32   reserved1:3;        //bit12, reserved
    __u32   SpecClk1Gate:1;     //bit15, gating special clock1, 0-clock off, 1-clock on
    __u32   reserved2:8;        //bit16, reserved
    __u32   SpecClk2Src:2;      //bit24, clock source select, 00-PLL3(1x), 01-PLL7(1x), 10-PLL3(2x), 11-PLL7(2x)
    __u32   reserved3:5;        //bit26, reserved
    __u32   SpecClk2Gate:1;     //bit31, gating special clock2, 0-clock off, 1-clock on

} __ccmu_lcdch1_clk_t;


/* CSI module clock type, used for CSI0/1 */
/* register address is 0x0134~0x0138 */
typedef struct __CCMU_CSI_CLK
{
    __u32   ClkDiv:5;           //bit0,  clock divide ratio, divided by (m+1), 1~32, ex.
    __u32   reserved0:19;       //bit5,  reserved
    __u32   ClkSrc:3;           //bit24, clock source select, 000-HOSC, 001-PLL3(1x), 010-PLL7(1x), 011/100/111-reserved, 101-PLL3(2x), 110:PLL7(2x)
    __u32   reserved1:3;        //bit27, reserved
    __u32   Reset:1;            //bit30, CSI reset, 0-reset valid, 1-reset invalid
    __u32   SpecClkGate:1;      //bit31, Gating special clock, 0-clock off, 1-clock on
} __ccmu_csi_clk_t;


typedef struct __CCMU_VE_CLK_REG013C
{
    __u32   Reset:1;            //bit0,  VE reset, 0-reset valid, 1-reset invalid
    __u32   reserved0:15;       //bit1,  reserved
    __u32   ClkDiv:3;           //bit16, Clock pre-divide ratio, divided by (n+1), 1~8 ex.
    __u32   reserved1:12;       //bit19, reserved
    __u32   SpecClkGate:1;      //bit31, gating special clock for VE, 0-mask, 1-pass
}__ccmu_ve_clk_reg013c_t;

typedef struct __CCMU_ADDA_CLK_REG0140
{
    __u32   reserved0:31;       //bit0,  reserved
    __u32   SpecClkGate:1;      //bit31, Gating special clock, 0-clock off, 1-clock on
} __ccmu_adda_clk_reg0140_t;

typedef struct __CCMU_AVS_CLK_REG0144
{
    __u32   reserved0:31;       //bit0,  reserved
    __u32   SpecClkGate:1;      //bit31, Gating special clock, 0-clock off, 1-clock on
} __ccmu_avs_clk_reg0144_t;


typedef struct __CCMU_ACE_CLK_REG0148
{
    __u32   ClkDiv:4;           //bit0,  clock divide ratio, divided by (m+1), 1~16 ex.
    __u32   reserved0:12;       //bit4,  reserved
    __u32   Reset:1;            //bit16, ACE reset, 0-reset valid, 1-reset invalid
    __u32   reserved1:7;        //bit17, reserved
    __u32   ClkSrc:1;           //bit24, Clock source select, 0-PLL4, 1-PLL5
    __u32   reserved2:6;        //bit25, reserved
    __u32   SpecClkGate:1;      //bit31, Gating special clock, 0-clock off, 1-clock on
} __ccmu_ace_clk_reg0148_t;


typedef struct __CCMU_LVDS_CLK_REG014C
{
    __u32   Reset:1;            //bit0,  LVDS reset
    __u32   reserved:31;        //bit1,  reserved
} __ccmu_lvds_clk_reg014c_t;


typedef struct __CCMU_HDMI_CLK_REG0150
{
    __u32   ClkDiv:4;           //bit0,  clock divide ratio, divided by (m+1), 1~16 ex.
    __u32   reserved0:20;       //bit4,  reserved
    __u32   ClkSrc:2;           //bit24, clock source select, 00-PLL3(1x), 01-PLL7(1x), 10-PLL3(2x), 11-PLL7(2x)
    __u32   reserved1:5;        //bit26, reserved
    __u32   SpecClkGate:1;      //bit31, Gating special clock, 0-clock off, 1-clock on
} __ccmu_hdmi_clk_reg0150_t;


typedef struct __CCMU_MALI400_CLK_REG0154
{
    __u32   ClkDiv:4;           //bit0,  clock divide ratio, divided by (m+1), 1~16 ex.
    __u32   reserved0:20;       //bit4,  reserved
    __u32   ClkSrc:2;           //bit24, clolck source select, 00-PLL3, 01-PLL4, 10-PLL5, 11-PLL7
    __u32   reserved1:4;        //bit26, reserved
    __u32   Reset:1;            //bit30, Mali400 reset, 0-reset valid, 1-reset invalid
    __u32   SpecClkGate:1;      //bit31, Gating special clock, 0-clock off, 1-clock on
} __ccmu_mali400_clk_reg0154_t;



typedef struct __CCMU_REG_LIST
{
    volatile __ccmu_pll1_core_reg0000_t     Pll1Ctl;    //0x0000, PLL1 control
    volatile __ccmu_pll1_tuning_reg0004_t   Pll1Tune;   //0x0004, PLL1 tuning
    volatile __ccmu_pll2_audio_reg0008_t    Pll2Ctl;    //0x0008, PLL2 control
    volatile __ccmu_pll2_tuning_reg000c_t   Pll2Tune;   //0x000C, PLL2 tuning
    volatile __ccmu_pll3_video_reg0010_t    Pll3Ctl;    //0x0010, PLL3 control
    volatile __u32                          Pll3Tune;   //0x0014, PLL3 tuning
    volatile __ccmu_pll4_ve_reg0018_t       Pll4Ctl;    //0x0018, PLL4 control
    volatile __u32                          Pll4Tune;   //0x001C, PLL4 tuning
    volatile __ccmu_pll5_ddr_reg0020_t      Pll5Ctl;    //0x0020, PLL5 control
    volatile __ccmu_pll5_tuning_reg0024_t   Pll5Tune;   //0x0024, PLL5 tuning
    volatile __ccmu_pll6_sata_reg0028_t     Pll6Ctl;    //0x0028, PLL6 control
    volatile __u32                          Pll6Tune;   //0x002C, PLL6 tuning
    volatile __ccmu_pll7_video1_reg0030_t   Pll7Ctl;    //0x0030, Pll7 control
    volatile __u32                          Pll7Tune;   //0x0034, Pll7 tuning
    volatile __ccmu_pll1_tuning2_reg0038_t  Pll1Tune2;  //0x0038, Pll1 tuning2
    volatile __ccmu_pll5_tuning2_reg003c_t  Pll5Tune2;  //0x003C, Pll5 tuning2
    volatile __u32                          reserved[4];//0x0040, reserved
    volatile __ccmu_osc24m_reg0050_t        HoscCtl;    //0x0050, OSC24M control
    volatile __ccmu_sysclkl_ratio_reg0054_t SysClkDiv;  //0x0054, AC328/AHB/APB0 divide ratio
    volatile __ccmu_apb1clk_ratio_reg0058_t Apb1ClkDiv; //0x0058, APB1 clock dividor
    volatile __ccmu_axiclk_gate_reg005c_t   AxiGate;    //0x005C, AXI module clock gating
    volatile __ccmu_ahbclk_gate0_reg0060_t  AhbGate0;   //0x0060, AHB module clock gating 0
    volatile __ccmu_ahbclk_gate1_reg0064_t  AhbGate1;   //0x0064, AHB module clock gating 1
    volatile __ccmu_apb0clk_gate_reg0068_t  Apb0Gate;   //0x0068, APB0 module clock gating
    volatile __ccmu_apb1clk_gate_reg006c_t  Apb1Gate;   //0x006C, APB1 module clock gating
    volatile __u32                          reserved1[4];   //0x0070, reserved
    volatile __ccmu_module0_clk_t           NandClk;    //0x0080, nand module clock control
    volatile __ccmu_module0_clk_t           MsClk;      //0x0084, MS module clock control
    volatile __ccmu_module0_clk_t           SdMmc0Clk;  //0x0088, SD/MMC0 module clock control
    volatile __ccmu_module0_clk_t           SdMmc1Clk;  //0x008C, SD/MMC1 module clock control
    volatile __ccmu_module0_clk_t           SdMmc2Clk;  //0x0090, SD/MMC2 module clock control
    volatile __ccmu_module0_clk_t           SdMmc3Clk;  //0x0094, SD/MMC3 module clock control
    volatile __ccmu_module0_clk_t           TsClk;      //0x0098, TS module clock control
    volatile __ccmu_module0_clk_t           SsClk;      //0x009C, SS module clock control
    volatile __ccmu_module0_clk_t           Spi0Clk;    //0x00A0, SPI0 module clock control
    volatile __ccmu_module0_clk_t           Spi1Clk;    //0x00A4, SPI1 module clock control
    volatile __ccmu_module0_clk_t           Spi2Clk;    //0x00A8, SPI2 module clock control
    volatile __ccmu_module0_clk_t           PataClk;    //0x00AC, PATA module clock control
    volatile __ccmu_module0_clk_t           Ir0Clk;     //0x00B0, IR0 module clock control
    volatile __ccmu_module0_clk_t           Ir1Clk;     //0x00B4, IR1 module clock control
    volatile __ccmu_module1_clk_t           I2sClk;     //0x00B8, IIS module clock control
    volatile __ccmu_module1_clk_t           Ac97Clk;    //0x00BC, AC97 module clock control
    volatile __ccmu_module1_clk_t           SpdifClk;   //0x00C0, SPDIF module clock control
    volatile __ccmu_keypad_clk_reg00c4_t    KeyPadClk;  //0x00C4, KEYPAD module clock control
    volatile __ccmu_sata_clk_reg00c8_t      SataClk;    //0x00C8, SATA module clock control
    volatile __ccmu_usb_clk_reg00cc_t       UsbClk;     //0x00CC, USB module clock control
    volatile __ccmu_gps_clk_reg00d0_t       GpsClk;     //0x00D0, GPS module clock control
    volatile __ccmu_module0_clk_t           Spi3Clk;    //0x00D4, SPI3 module clock control
    volatile __u32                          reserved2[10];  //0x00D8, reserved
    volatile __ccmu_dram_gate_reg0100_t     DramGate;   //0x0100, DRAM gating
    volatile __ccmu_fedemp_clk_t            DeBe0Clk;   //0x0104, DE-BE 0 module clock control
    volatile __ccmu_fedemp_clk_t            DeBe1Clk;   //0x0108, DE-BE 1 module clock control
    volatile __ccmu_fedemp_clk_t            DeFe0Clk;   //0x010C, DE-FE 0 module clock control
    volatile __ccmu_fedemp_clk_t            DeFe1Clk;   //0x0110, DE-FE 1 module clock control
    volatile __ccmu_fedemp_clk_t            DeMpClk;    //0x0114, DE-MP module clock control
    volatile __ccmu_lcdch0_clk_t            Lcd0Ch0Clk; //0x0118, LCD0 CH0 module clock control
    volatile __ccmu_lcdch0_clk_t            Lcd1Ch0Clk; //0x011C, LCD1 CH0 module clock control
    volatile __ccmu_csiisp_clk_reg0120_t    CsiIspClk;  //0x0120, CSI-ISP module clock control
    volatile __u32                          reserved3;  //0x0124, reserved
    volatile __ccmu_tvd_clk_reg0128_t       TvdClk;     //0x0128, TVD module clock control
    volatile __ccmu_lcdch1_clk_t            Lcd0Ch1Clk; //0x012C, LCD0 CH1 module clock control
    volatile __ccmu_lcdch1_clk_t            Lcd1Ch1Clk; //0x0130, LCD1 CH1 module clock control
    volatile __ccmu_csi_clk_t               Csi0Clk;    //0x0134, CSI0 module clock control
    volatile __ccmu_csi_clk_t               Csi1Clk;    //0x0138, CSI1 module clock control
    volatile __ccmu_ve_clk_reg013c_t        VeClk;      //0x013C, VE module clock control
    volatile __ccmu_adda_clk_reg0140_t      AddaClk;    //0x0140, audio codec clock control
    volatile __ccmu_avs_clk_reg0144_t       AvsClk;     //0x0144, AVS module clock control
    volatile __ccmu_ace_clk_reg0148_t       AceClk;     //0x0148, ACE module clock control
    volatile __ccmu_lvds_clk_reg014c_t      LvdsClk;    //0x014C, LVDS module clock control
    volatile __ccmu_hdmi_clk_reg0150_t      HdmiClk;    //0x0150, HDMI module clock control
    volatile __ccmu_mali400_clk_reg0154_t   MaliClk;    //0x0154, MALI400 module clock control

} __ccmu_reg_list_t;


#endif  // #ifndef __CCMU_REGS_H__

