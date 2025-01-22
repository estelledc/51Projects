/**
 * CPU: 89C52
 * Freq: 12MHz
*/

#include <reg52.h>
#include <stdio.h>

void delay_100ms(); //@12MHz

void main()
{
    P2 = 0x00;
    while (1)
    {
        
        P2 = ~P2;
        delay_100ms();
    }
}

void delay_100ms()
{
    unsigned char i, j;

    i = 195;
    j = 138;

    do
    {
        while (--j)
            ;
    } while (--i);
}