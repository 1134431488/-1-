#include <stdio.h>

void func(void);
int main(void)
{
	func();
	return 0;
}

void func(void)
{
	int a;
	a = 0;
loop:
	a++;
	if(a < 10) goto loop;
	printf("%d", a );
	/*
	����������
	            ��ǩ����û��������ģ�ֻ��һ����־�㡣
	            ����goto���������ƣ�ֻ���ǵ�ǰ���������ԣ�������Ƕ���˵��
	            ��ǩ��������Ҳ����˵�ǵ�ǰ������
	*/
}
