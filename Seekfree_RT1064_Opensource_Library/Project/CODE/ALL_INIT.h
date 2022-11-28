/******************************************************************************
 * @Description: 初始化汇总
 * @Date: 2022-11-27 14:13:39
 * @author: lzq
 * @FilePath: \RT1064_Library-master\Seekfree_RT1064_Opensource_Library\Project\CODE\ALL_INIT.h
*******************************************************************************/
#ifndef CODE_ALL_INIT_H_
#define CODE_ALL_INIT_H_
#include "headfile.h"
//===================================================  初始化  ===================================================
void all_init(void);

//===================================================蜂鸣器相关设置===================================================
/*蜂鸣器引脚*/
#define BEEP_ENABLE B11
/*蜂鸣器初始化*/
void BEEP_INIT(void);
/*开、关*/
#define BEEP_ON gpio_set(BEEP_ENABLE, 1);
#define BEEP_OFF gpio_set(BEEP_ENABLE, 0);
/*定时关闭*/
#define BEEP(i)  \
    do           \
    {            \
        BEEP_ON; \
        buzzerTime = i;\ 
    } while (0);
//之前王若愚学长在这里 /10 不太理解这是想要干什么

extern uint8 buzzerTime;
#endif /*CODE_ALL_INIT_H_*/
