/**********************************************************************************************************************
 * 
 * ʹ�� DHT11 ��ʪ�ȴ�������ɲ���������ӡ��������ڣ�ʹ�� SDCC ����������
 * 
 * ---------------------- ʱ������ ----------------------
 * 
 * ��������ʱ��Ƶ�� 16 Mhz��Ҫ�޸�ʱ��Ƶ�ʣ����ĺ� CLOCK ��ֵ���ɣ�
 * ע�⣺CLOCK ��ֵΪ������Ƶ��/һ��ָ���������������� 12M ����� stc89c52 ��Ƭ����һ��ָ����Ҫ 12 ���������ڣ���ˣ�CLOCK=1
 * 
 * ---------------------- �������� ----------------------
 * 
 * DHT11 DATA ���ţ�P11
 * 
 * ������� Tx ���ţ�P10
 * 
 * ---------------------- �������� ----------------------
 * 
 * �����ʣ�9600��λ��ȣ�8��ֹͣλ��1
 * 
 * ********************************************************************************************************************
*/

#include "stdio.h"
#include "soft_uart.h"
#include "dht11.h"

void main()
{
    DHT11_Data dhtData;
    DHT11_Init();

    while (1)
    {
        switch (DHT11_Measure(&dhtData))
        {
        case DHT11_CONNECT_ERR:
            printf("connect DHT11 failed !\n");
            break;
        case DHT11_VERIFY_ERR:
            printf("data verify error !\n");
            break;
        default:
            printf("temp: %d, humidity: %d%%\n", (uint8_t)dhtData.temperature, dhtData.humidity);
            break;
        }

        Delay(2000);
    }
}

/* redirect 'int putchar(int c);' function */
int putchar(int c)
{
    TxSend((uint8_t)c);
    return c;
}
