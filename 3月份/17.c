#include <stdio.h>
static int a = 100;		//��static�洢���˵���������ı�������������ģ��˽�С��������������Ƴ�ͻ������ 
static void fun(void); 
int main(void)
{
	extern int a;
	printf("main() a = %d\n", a);
	fun();
}

static void fun(void)
{
	static int a = 50;
	printf("fun() a = %d\n", a);
}
