#include <stdio.h>
extern int max(int x, int y)//����ʱ��Ҳ���Բ���extern��Ĭ��Ϊ�ⲿ����
{
	int z;  //�Զ������������ӣ���������
	z = x > y ? x : y;
	return z;
}

extern void gccx(void)
{
	printf("�ⲿ����\n");
}
int kk = 10; //����ʽ����, �������ڶ���ʽ����ǰ����extern
