#include <stdio.h>
enum DAY {mon = 1, tue, wed, thu, frim, sat, sun} day; //���ŷָ���ö������
int main(void)
{
	//����ö��Ԫ��
	for(day = mon; day <= sun; day++)
	{
		printf("ö��Ԫ�أ�%d\n", day);
	}
	return 0;
}
