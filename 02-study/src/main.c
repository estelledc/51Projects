/**
 * *********************************************
 * 
 * ����ļ��γ̵���Ҫ�����ļ����������������ʾ�Ĵ��롣
 * 
 * *********************************************
 */
#include "../inc/LCD1602.h" // ����LCD1602ͷ�ļ�
#include "../inc/delay.h" // ������ʱ����ͷ�ļ�
#include "../inc/display.h" // ������ʾ���ֺ���ͷ�ļ�

#include <REGX52.H>
/**
 * ��ʼ��LCD����ʾ�ַ���
 */
void InitLCDAndDisplayString()
{
    LCD_Init(); // ��ʼ��LCD
    LCD_ShowString(0, 0, "Hello, World!"); // �ڵ�0�е�0����ʾ�ַ���"Hello, World!"
}

/**
 * ������
 */
void main()
{
    InitLCDAndDisplayString(); // ��ʼ��LCD����ʾ�ַ���

    while (1)
    {
        // �����ڰ˸����������ʾ����1��8
        DisplayDigit(0, 1);
        delay_ms(1000); // ��ʱ1��
        DisplayDigit(1, 2);
        delay_ms(1000); // ��ʱ1��
        DisplayDigit(2, 3);
        delay_ms(1000); // ��ʱ1��
        DisplayDigit(3, 4);
        delay_ms(1000); // ��ʱ1��
        DisplayDigit(4, 5);
        delay_ms(1000); // ��ʱ1��
        DisplayDigit(5, 6);
        delay_ms(1000); // ��ʱ1��
        DisplayDigit(6, 7);
        delay_ms(1000); // ��ʱ1��
        DisplayDigit(7, 8);
        delay_ms(1000); // ��ʱ1��
    }
}