#include <stdio.h>
#include <stdlib.h>
extern int KKK(void);

static int x = 666;
int a = 888; //ͬһ����������ļ�������ʹ�����������������Դ�ļ���
int main(int argc, char *argv[])
{
	printf("a=%d x=%d\n", a, x);
	KKK();  //����ͬһ������������뵥Ԫ���ⲿ����
	return 0;
}
