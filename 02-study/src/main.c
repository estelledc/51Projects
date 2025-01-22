/**
 * *********************************************
 * 
����ļ��γ̵���Ҫ�����ļ����������������ʾ�Ĵ��롣
 * 
 * *********************************************
*/

#include <REGX52.H>
#include <intrins.h>// ʹ��_nop_()����

// ����ܶ������������
unsigned char code SEG_CODE[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

// ��ʱ����
void delay_ms(unsigned int ms)
{
    unsigned int i, j;
    for (i = 0; i < ms; i++)
    {
        for (j = 0; j < 123; j++)
        {
            _nop_(); // ÿ��_nop_()��Լ��ʱ1΢��
        }
    }
}

// ��ʾ���ֺ���
void DisplayDigit(unsigned char position, unsigned char number)
{
    P0 = ~SEG_CODE[number]; // ���Ͷ��뵽P2�˿�

    // ѡ�������
    P2_2 = position & 0x01;
    P2_3 = (position >> 1) & 0x01;
    P2_4 = (position >> 2) & 0x01;

    
}

void main()
{
    while (1)
    {
        DisplayDigit(0, 1);
        // delay_ms(1000); //��ʱ1��
        //չʾ�˸������
        DisplayDigit(1, 2); // �ڵ�2���������ʾ����2
        // delay_ms(1000); //��ʱ1��
        DisplayDigit(2, 3); // �ڵ�3���������ʾ����3
        // delay_ms(1000); //��ʱ1��
        DisplayDigit(3, 4); // �ڵ�4���������ʾ����4
        // delay_ms(1000); //��ʱ1��
        DisplayDigit(4, 5); // �ڵ�5���������ʾ����5
        // delay_ms(1000); //��ʱ1��
        // delay_ms(1000); //��ʱ1��
        DisplayDigit(5, 6); // �ڵ�6���������ʾ����6
        // delay_ms(1000); //��ʱ1��
        DisplayDigit(6, 7); // �ڵ�7���������ʾ����7
        // delay_ms(1000); //��ʱ1��
        DisplayDigit(7, 8); // �ڵ�8���������ʾ����8
    }
}