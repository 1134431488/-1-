#include <stdio.h>

int main(void)
{
	extern int temp;	//ָʾ������������֮����Ѱ�������������ʽ����(Referencing Declaration)
	{
		int temp = 10001;
	}
	printf("%d\n", temp);
	return 0;
}

int temp = 999;	//����ʽ������Defining Declaration����main������ĩβ
