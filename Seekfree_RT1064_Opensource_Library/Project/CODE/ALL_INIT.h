/******************************************************************************
 * @Description: ��ʼ������
 * @Date: 2022-11-27 14:13:39
 * @author: lzq
 * @FilePath: \RT1064_Library-master\Seekfree_RT1064_Opensource_Library\Project\CODE\ALL_INIT.h
*******************************************************************************/
#ifndef CODE_ALL_INIT_H_
#define CODE_ALL_INIT_H_
#include "headfile.h"
//===================================================  ��ʼ��  ===================================================
void all_init(void);

//===================================================�������������===================================================
/*����������*/
#define BEEP_ENABLE B11
/*��������ʼ��*/
void BEEP_INIT(void);
/*������*/
#define BEEP_ON gpio_set(BEEP_ENABLE, 1);
#define BEEP_OFF gpio_set(BEEP_ENABLE, 0);
/*��ʱ�ر�*/
#define BEEP(i)  \
    do           \
    {            \
        BEEP_ON; \
        buzzerTime = i;\ 
    } while (0);
//֮ǰ������ѧ�������� /10 ��̫���������Ҫ��ʲô

extern uint8 buzzerTime;
#endif /*CODE_ALL_INIT_H_*/
