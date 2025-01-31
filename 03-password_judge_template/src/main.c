#include <REGX52.H>
#include "LCD1602.h"

int main()
{
    LCD_Init();
    LCD_ShowString(1,1,"Hello,World!");
    LCD_ShowString(2,1,"I am LCD1602!");
    while(1);
}