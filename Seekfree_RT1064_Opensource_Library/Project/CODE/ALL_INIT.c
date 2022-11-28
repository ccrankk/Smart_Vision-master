/******************************************************************************
 * @Description: ��ʼ��
 * @Date: 2022-11-27 14:13:47
 * @author: lzq
 * @FilePath: \RT1064_Library-master\Seekfree_RT1064_Opensource_Library\Project\CODE\ALL_INIT.c
*******************************************************************************/
#ifndef CODE_ALL_INIT_C_
#define CODE_ALL_INIT_C_
#include "ALL_INIT.h"

uint8 buzzerTime;
/******************************************************************************
 * @Function: void all_init()
 * @brief: ��ʼ������ģ��
 * @author: lzq
 * @return {*}
 * @Others:��ʼ����ģ�飬��������ģ���Ƿ�����
 *******************************************************************************/
void all_init()
{
    /*��������ʼ��*/
    BEEP_INIT();
    /*lcd��ʾ��ʼ��*/
    lcd_init();
    // lcd_showstr(0, 0, "lcd_init");
    /*pit��س�ʼ��*/
    pit_init();
    pit_interrupt_ms(PIT_CH0, 5);

}
/******************************************************************************
 * @Function: void BEEP_INIT(void)
 * @brief: ��������ʼ��
 * @author: lzq
 * @return {*}
 * @Others:
 *******************************************************************************/
void BEEP_INIT(void)
{
    gpio_init(BEEP_ENABLE, GPO, 0, GPIO_PIN_CONFIG);
}

#endif /*CODE_ALL_INIT_C_*/