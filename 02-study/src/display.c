#include <REGX52.H>

// 数码管段码表（共阳极）
unsigned char code SEG_CODE[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

/**
 * 显示数字函数
 * @param position 数码管的位置（0-7）
 * @param number 要显示的数字（0-9）
 */
void DisplayDigit(unsigned char position, unsigned char number)
{
    P0 = ~SEG_CODE[number]; // 发送段码到P0端口

    // 选择数码管
    P2_2 = position & 0x01;
    P2_3 = (position >> 1) & 0x01;
    P2_4 = (position >> 2) & 0x01;


}