#include <REGX52.H>
#include <intrins.h>

/**
 * 延时函数
 * @param ms 延时的毫秒数
 */
void delay_ms(unsigned int ms)
{
    unsigned int i, j;
    for (i = 0; i < ms; i++)
    {
        for (j = 0; j < 123; j++)
        {
            _nop_(); // 每个_nop_()大约延时1微秒
        }
    }
}