#include <stdio.h>
void trystat(void);
int main(void)
{
	int count;
	for(count = 1; count <= 3; count++)
	{
		printf("ѭ��������%d:\n", count);
		trystat();
	}
	return 0;
}
void trystat(void)
{
	auto int fade = 1;//auto�ؼ�������Ϊ�Զ��洢��𣬶�̬�洢���
	static int stay = 1;//static�ؼ�������Ϊ�ڲ����ӣ���̬�洢���
	printf("fade = %d and stay = %d\n", fade++, stay++);
}
