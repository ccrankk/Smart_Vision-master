/******************************************************************************
 * @Description: 初始化
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
 * @brief: 初始化各个模块
 * @author: lzq
 * @return {*}
 * @Others:初始化各模块，并检测各个模块是否正常
 *******************************************************************************/
void all_init()
{
    /*蜂鸣器初始化*/
    BEEP_INIT();
    /*lcd显示初始化*/
    lcd_init();
    // lcd_showstr(0, 0, "lcd_init");
    /*pit相关初始化*/
    pit_init();
    pit_interrupt_ms(PIT_CH0, 5);

}
/******************************************************************************
 * @Function: void BEEP_INIT(void)
 * @brief: 蜂鸣器初始化
 * @author: lzq
 * @return {*}
 * @Others:
 *******************************************************************************/
void BEEP_INIT(void)
{
    gpio_init(BEEP_ENABLE, GPO, 0, GPIO_PIN_CONFIG);
}

#endif /*CODE_ALL_INIT_C_*/