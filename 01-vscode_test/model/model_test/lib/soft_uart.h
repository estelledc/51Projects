#ifndef _H_SOFT_UART
#define _H_SOFT_UART

/**
 * �����ʣ�9600��λ��ȣ�8��ֹͣλ��1
*/

#include "stdint.h"
#include "mcs51/8051.h"

#define P_TXD P1_0 //����ģ�⴮�ڷ��Ͷ�,����������IO

void TxSend(uint8_t dat);

#endif
