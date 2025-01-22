/**
 * *********************************************
 * 
这个文件课程的主要代码文件，包含了数码管显示的代码。
 * 
 * *********************************************
*/

#include <REGX52.H>
#include <intrins.h>// 使用_nop_()函数

// 数码管段码表（共阳极）
unsigned char code SEG_CODE[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

// 延时函数
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

// 显示数字函数
void DisplayDigit(unsigned char position, unsigned char number)
{
    P0 = ~SEG_CODE[number]; // 发送段码到P2端口

    // 选择数码管
    P2_2 = position & 0x01;
    P2_3 = (position >> 1) & 0x01;
    P2_4 = (position >> 2) & 0x01;

    
}

void main()
{
    while (1)
    {
        DisplayDigit(0, 1);
        // delay_ms(1000); //延时1秒
        //展示八个数码管
        DisplayDigit(1, 2); // 在第2个数码管显示数字2
        // delay_ms(1000); //延时1秒
        DisplayDigit(2, 3); // 在第3个数码管显示数字3
        // delay_ms(1000); //延时1秒
        DisplayDigit(3, 4); // 在第4个数码管显示数字4
        // delay_ms(1000); //延时1秒
        DisplayDigit(4, 5); // 在第5个数码管显示数字5
        // delay_ms(1000); //延时1秒
        // delay_ms(1000); //延时1秒
        DisplayDigit(5, 6); // 在第6个数码管显示数字6
        // delay_ms(1000); //延时1秒
        DisplayDigit(6, 7); // 在第7个数码管显示数字7
        // delay_ms(1000); //延时1秒
        DisplayDigit(7, 8); // 在第8个数码管显示数字8
    }
}