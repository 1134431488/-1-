#include <stdio.h>
int a = 10; //���Զ�������ͬ���ⲿ����ֻ��ʹ�ó������ʽ��ʼ���ļ����������
void trystat(void);
int main(void)
{
	int count;
	auto int a = 11;
	printf("a = %d\n", a);
	
	{//�����е�a
		extern int a;//������ô�����䣬a = 11.������û�ж�����ڵ�a����ʹ�����������a��������extern������a���ⲿ����
	
		printf("a = %d\n", a);
	}
	
	for(count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d:\n", count);
		trystat();
	}
	return 0;
}

void trystat(void)
{
	int fade = 1;
	static int stay = 1;
	printf("fade = %d and stay = %d\n", fade++, stay++);
}
