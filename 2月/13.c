#include <stdio.h>
void func1(int *m);
int main(void)
{
	int a = 999;
	int *p = &a;    //����ָ��һ��Ұָ��
	printf("%#X\n", &a);
	printf("%#X\n", p);
	printf("%#X\n", *&p);   //*&p == p ������ô����
	printf("%#X\n", &p);
	func1((int *)&p);
	return 0;
}

void func1(int *m)
{
	printf("%#X\n", m);
}
