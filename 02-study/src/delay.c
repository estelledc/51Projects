#include <REGX52.H>
#include <intrins.h>

/**
 * ��ʱ����
 * @param ms ��ʱ�ĺ�����
 */
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