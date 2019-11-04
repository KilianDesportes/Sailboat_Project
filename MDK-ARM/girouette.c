#include "girouette.h"

#include "MyTimer.h"

#include "stdlib.h"

/*void Girouette_Conf(TIM_TypeDef * Timer)
{
	RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
	
	LL_GPIO_InitTypeDef GPIO_Init_5 = {	LL_GPIO_PIN_5,
		LL_GPIO_MODE_ALTERNATE,
		LL_GPIO_MODE_OUTPUT_2MHz,
		LL_GPIO_OUTPUT_PUSHPULL,
		LL_GPIO_PULL_UP };
	
	LL_GPIO_InitTypeDef GPIO_Init_6 = {	LL_GPIO_PIN_6,
		LL_GPIO_MODE_ALTERNATE,
		LL_GPIO_MODE_OUTPUT_2MHz,
		LL_GPIO_OUTPUT_PUSHPULL,
		LL_GPIO_PULL_UP };
	
	LL_GPIO_InitTypeDef GPIO_Init_7 = {	LL_GPIO_PIN_7,
		LL_GPIO_MODE_ALTERNATE,
		LL_GPIO_MODE_OUTPUT_2MHz,
		LL_GPIO_OUTPUT_PUSHPULL,
		LL_GPIO_PULL_UP };
		
	LL_GPIO_Init( GPIOA, &GPIO_Init_5 );
	LL_GPIO_Init( GPIOA, &GPIO_Init_6 );
	LL_GPIO_Init( GPIOA, &GPIO_Init_7 );
	
	LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM3);
		
//	LL_TIM_ENCODER_InitTypeDef My_LL_Tim_Encoder_Init_Struct;
		
	My_LL_Tim_Encoder_Init_Struct.EncoderMode = LL_TIM_ENCODERMODE_X4_TI12;
	My_LL_Tim_Encoder_Init_Struct.IC1Polarity = LL_TIM_CHANNEL_CH1;
	My_LL_Tim_Encoder_Init_Struct.IC1ActiveInput = LL_TIM_CHANNEL_CH1;
	My_LL_Tim_Encoder_Init_Struct.IC1Prescaler = LL_TIM_CHANNEL_CH1;
	My_LL_Tim_Encoder_Init_Struct.IC1Filter = LL_TIM_CHANNEL_CH1;
	My_LL_Tim_Encoder_Init_Struct.IC2Polarity = LL_TIM_CHANNEL_CH2;
	My_LL_Tim_Encoder_Init_Struct.IC2ActiveInput = LL_TIM_CHANNEL_CH2;
//	My_LL_Tim_Encoder_Init_Struct.IC2Prescaler =
	//My_LL_Tim_Encoder_Init_Struct.IC2Filter =

	
//	LL_TIM_Init(Timer,&My_LL_Tim_Encoder_Init_Struct);
	
	LL_TIM_CC_EnableChannel(Timer,LL_TIM_CHANNEL_CH1);
	LL_TIM_CC_EnableChannel(Timer,LL_TIM_CHANNEL_CH2);
	
	//LL_TIM_OC_SetMode(Timer,LL_TIM_CHANNEL_CH1,LL_TIM_OCMODE_   ); //Mode ?
	//LL_TIM_OC_SetMode(Timer,LL_TIM_CHANNEL_CH2,LL_TIM_OCMODE_   ); //Mode ?
	
	// LL_TIM_OC_SetCompareCH1(Timer,ARR/2); Pour definir la période 
		
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
}*/


