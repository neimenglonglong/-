/*********************************************/
/*这个文件中主要存放用户应用函数*/
/*********************************************/

#include "app.h"
#include "bsp_init.h"
#include "usart.h"
#include "stdio.h"
/*************************************/
/*裸机情况下初始化函数*/
/*************************************/
void app_init()
{
    Bsp_Init ();//板级支持包初始化

}


/*************************************/
/*裸机情况下主函数*/
/*************************************/
void app_main()
{
    HAL_GPIO_TogglePin (LED_RED_GPIO_Port,LED_RED_Pin);//红灯闪
	HAL_Delay (200);
    printf("\r\n您发送的消息为:\r\n");
}

