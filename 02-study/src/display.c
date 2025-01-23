#include <REGX52.H>

// ����ܶ������������
unsigned char code SEG_CODE[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

/**
 * ��ʾ���ֺ���
 * @param position ����ܵ�λ�ã�0-7��
 * @param number Ҫ��ʾ�����֣�0-9��
 */
void DisplayDigit(unsigned char position, unsigned char number)
{
    P0 = ~SEG_CODE[number]; // ���Ͷ��뵽P0�˿�

    // ѡ�������
    P2_2 = position & 0x01;
    P2_3 = (position >> 1) & 0x01;
    P2_4 = (position >> 2) & 0x01;


}