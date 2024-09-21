/*********************************************/
/*����ļ�����Ҫ����жϴ�����*/
/*********************************************/
#include "interrupt.h"

extern TIM_HandleTypeDef htim6;


/****************************************************/
/*��ʱ������ж�*/
/**/
/*****************************************************/
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  static uint8_t tim6Cnt = 0;//��̬���������ú���ʱ��������
	if(&htim6 == htim)
	{
	  tim6Cnt ++;
		if(TIM6_OVERFLOW_COUNT == tim6Cnt)
		{
		    HAL_GPIO_TogglePin (LED_GREEN_GPIO_Port,LED_GREEN_Pin);//�̵���
			tim6Cnt = TIM6_OVERFLOW_SET0;
		}
	}
}

