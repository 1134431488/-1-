#include <stdio.h>
int main(void)
{
	static int a;
	int b;
	printf("a = %d �ֽ�Ϊ = %d\n", a, sizeof(a));//���ڵľ�̬������ֵ����ʼ��Ϊ0���������Զ������ǲ����Լ���ʼ����
	printf("b = %d", b);
	return 0;
}
