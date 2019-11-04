#include "girouette.h"

#include "MyTimer.h"

#include "stdlib.h"

void Girouette_Conf(TIM_TypeDef * Timer)
{
	RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
	
	LL_GPIO_InitTypeDef GPIO_Init = {	LL_GPIO_PIN_8,
		LL_GPIO_MODE_ALTERNATE,
		LL_GPIO_MODE_OUTPUT_2MHz,
		LL_GPIO_OUTPUT_PUSHPULL,
		LL_GPIO_PULL_UP };
		
	LL_GPIO_Init( GPIOA, &GPIO_Init );
	
	LL_TIM_InitTypeDef My_LL_Tim_Init_Struct;
	
	LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_TIM1);
	
	int ARR = 9999;
	int PSC = 143;
	
	My_LL_Tim_Init_Struct.Autoreload = ARR;
	My_LL_Tim_Init_Struct.Prescaler = PSC;
	
	LL_TIM_Init(Timer,&My_LL_Tim_Init_Struct);
	
	LL_TIM_CC_EnableChannel(Timer,LL_TIM_CHANNEL_CH1);
	
	LL_TIM_OC_SetMode(Timer,LL_TIM_CHANNEL_CH1,LL_TIM_OCMODE_PWM1);
	
	LL_TIM_OC_SetCompareCH1(Timer,ARR/2);
		
	LL_TIM_EnableAllOutputs(Timer);
	
	LL_TIM_EnableCounter(Timer);
}





void Girouette_Start(void)
{
}

void Girouette_Stop(void)
{
}

void Girouette_Reset(void)
{
}


