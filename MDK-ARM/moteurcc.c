#include "moteurcc.h"


void MoteurCC_Congif(TIM_TypeDef * Timer)
{
	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
	
	int ARR = 999;
	int PSC = 71;
	
	LL_TIM_InitTypeDef *TIM_InitStruct.
	TIM_InitStruct->Prescaler         = PSC;
  TIM_InitStruct->CounterMode       = LL_TIM_COUNTERMODE_UP;
  TIM_InitStruct->Autoreload        = ARR;
  TIM_InitStruct->ClockDivision     = LL_TIM_CLOCKDIVISION_DIV1;
  TIM_InitStruct->RepetitionCounter = (uint8_t)0x00;	
	
	LL_TIM_Init(Timer,TIM_InitStruct);
	LL_TIM_CC_EnableChannel(Timer,LL_TIM_CHANNEL_CH2);
	LL_TIM_OC_SetMode(TIM2,LL_TIM_CHANNEL_CH2,LL_TIM_OCMODE_PWM1);
	LL_TIM_OC_SetCompareCH1(Timer,ARR/2);
	LL_TIM_EnableAllOutputs(Timer);
	LL_TIM_EnableCounter(Timer);
	
	
}
