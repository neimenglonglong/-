/*********************************************/
/*这个文件中主要存放中断处理函数*/
/*********************************************/
#include "interrupt.h"

extern TIM_HandleTypeDef htim6;


/****************************************************/
/*定时器溢出中断*/
/**/
/*****************************************************/
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  static uint8_t tim6Cnt = 0;//静态变量，调用函数时不会清零
	if(&htim6 == htim)
	{
	  tim6Cnt ++;
		if(TIM6_OVERFLOW_COUNT == tim6Cnt)
		{
		    HAL_GPIO_TogglePin (LED_GREEN_GPIO_Port,LED_GREEN_Pin);//绿灯闪
			tim6Cnt = TIM6_OVERFLOW_SET0;
		}
	}
}

