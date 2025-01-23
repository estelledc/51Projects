/**
 * *********************************************
 * 
 * 这个文件课程的主要代码文件，包含了数码管显示的代码。
 * 
 * *********************************************
 */
#include "../inc/LCD1602.h" // 包含LCD1602头文件
#include "../inc/delay.h" // 包含延时函数头文件
#include "../inc/display.h" // 包含显示数字函数头文件

#include <REGX52.H>
/**
 * 初始化LCD并显示字符串
 */
void InitLCDAndDisplayString()
{
    LCD_Init(); // 初始化LCD
    LCD_ShowString(0, 0, "Hello, World!"); // 在第0行第0列显示字符串"Hello, World!"
}

/**
 * 主函数
 */
void main()
{
    InitLCDAndDisplayString(); // 初始化LCD并显示字符串

    while (1)
    {
        // 依次在八个数码管上显示数字1到8
        DisplayDigit(0, 1);
        delay_ms(1000); // 延时1秒
        DisplayDigit(1, 2);
        delay_ms(1000); // 延时1秒
        DisplayDigit(2, 3);
        delay_ms(1000); // 延时1秒
        DisplayDigit(3, 4);
        delay_ms(1000); // 延时1秒
        DisplayDigit(4, 5);
        delay_ms(1000); // 延时1秒
        DisplayDigit(5, 6);
        delay_ms(1000); // 延时1秒
        DisplayDigit(6, 7);
        delay_ms(1000); // 延时1秒
        DisplayDigit(7, 8);
        delay_ms(1000); // 延时1秒
    }
}