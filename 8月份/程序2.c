#include <stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;
	a_post = a++;
	pre_b = ++b;
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
	int x = 1, y = 2;
	printf("%d\n", x * y++);//��׺������x*y��ֵ��� y+1
	printf("%d\n", y);//���y��ֵ
	int n = 3, nextnum;//y = 3
	nextnum = (y + n++) * 6;
	printf("%d\n", nextnum);
	int num = 5;
	printf("%d %d\n", num, num * num++);//����������ϣ���ֵ˳����ܴ�������ִ��
	return 0;
}
