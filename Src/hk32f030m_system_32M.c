/*
	Minimal SystemInit routine for setting the HK32F030M clock to 32 MHz
	gbm 01'2021
*/

#include "hk32f030m.h"

void SystemInit(void);	// suppress pedantic warning

void SystemInit(void)
{
	// Set 32 MHz HCLK
	FLASH->ACR = 1;
	RCC->CFGR4 |= 7u << RCC_RCC_CFGR4_FLITFCLK_PRE_Pos;	// div by 8 (by 6 after reset)
	RCC->CFGR = 0;	// set HCLK divider to 1 (RESET value is 0x10)
}
