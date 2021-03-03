/*
	Replacement for missing hk32f030m_def.h from Keil MDK-ARM support package version 1.0.7
	- definitions required by system_hk32f030m.c and some useful extras
 
	gbm 01'2021
*/
#ifndef HK32F030M_DEF_H_
#define HK32F030M_DEF_H_

// defs required by system_hk030m.c file =================================
#define	HSI_VALUE	32000000u
#define	EXTCLK_VALUE	8000000u
#define LSI_VALUE	40000u

#define STARTUP_TIMEOUT	1000u

#define FLASH_Latency_2	1 // 1 WS up to 32 MHz

// other useful defs =====================================================
#define FLASH_PAGE_SIZE	128u
#define	EEPROM_BASE	0x0c000000

enum afn_ {AFN_I2C, AFN_USART, AFN_SPI, AFN_TIM1, AFN_TIM2, AFN_MCO, AFN_BEEP, AFN_ADC};

// IOMUX
#define	IOMUX_NRST_PIN_KEY 0x5ae1

#define IOMUX_PKG_PIN_SEL_PD6_Pos	7
#define IOMUX_PKG_PIN_SEL_PA1	(1u << IOMUX_PKG_PIN_SEL_PD6_Pos)
#define IOMUX_PKG_PIN_SEL_PD4	(2u << IOMUX_PKG_PIN_SEL_PD6_Pos)
#define IOMUX_PKG_PIN_SEL_PA2	(3u << IOMUX_PKG_PIN_SEL_PD6_Pos)

#define IOMUX_PKG_PIN_SEL_PD5_Pos	5
#define IOMUX_PKG_PIN_SEL_PD3	(1u << IOMUX_PKG_PIN_SEL_PD5_Pos)
#define IOMUX_PKG_PIN_SEL_PD1	(2u << IOMUX_PKG_PIN_SEL_PD5_Pos)
#define IOMUX_PKG_PIN_SEL_PC6	(3u << IOMUX_PKG_PIN_SEL_PD5_Pos)

#define IOMUX_PKG_PIN_SEL_PC4_Pos	3
#define IOMUX_PKG_PIN_SEL_PC5	(1u << IOMUX_PKG_PIN_SEL_PC4_Pos)
#define IOMUX_PKG_PIN_SEL_PC3	(2u << IOMUX_PKG_PIN_SEL_PC4_Pos)
#define IOMUX_PKG_PIN_SEL_PC7	(3u << IOMUX_PKG_PIN_SEL_PC4_Pos)

#define IOMUX_PKG_PIN_SEL_PB5_Pos	1
#define IOMUX_PKG_PIN_SEL_PA3	(1u << IOMUX_PKG_PIN_SEL_PB5_Pos)
#define IOMUX_PKG_PIN_SEL_PD2	(2u << IOMUX_PKG_PIN_SEL_PB5_Pos)

#define IOMUX_PKG_PIN_SEL_PA0_Pos	0
#define IOMUX_PKG_PIN_SEL_PB4	(1u << IOMUX_PKG_PIN_SEL_PA0_Pos)

// GPIO
#define GPIO_MODER_IN	0u
#define GPIO_MODER_OUT	1u
#define GPIO_MODER_AF	2u
#define GPIO_MODER_AN	3u

#define GPIO_PUPDR_PU	1u
#define GPIO_PUPDR_PD	2u

#define GPIO_OSPEEDR_LOW	0
#define GPIO_OSPEEDR_MED	1u
#define GPIO_OSPEEDR_FAST	2u
#define GPIO_OSPEEDR_HI	3u

// macros for GPIO setup
#define BF2(b,v)	((v) << (((b) & 0xf) * 2))
#define BF4(b,v)	((v) << (((b) & 7) * 4))
#define BF2A(b,v)	((v) << (((b) & 0xf) * 2) | ~(3u << (((b) & 0xf) * 2)))

//TIM
#define TIM_CCMR1_OC1M_PWM1	0x0060	// OC1M[2:0] - PWM mode 1
#define TIM_CCMR1_OC2M_PWM1	0x6000	// OC2M[2:0] - PWM mode 1
#define TIM_CCMR2_OC3M_PWM1	0x0060	// OC3M[2:0] - PWM mode 1
#define TIM_CCMR2_OC4M_PWM1	0x6000	// OC4M[2:0] - PWM mode 1

#endif
