#include <stdio.h>
/* ��������������ʹ��ָ����ʼ�����������������ں������ⲿ���о�̬�洢�ڣ������������ں������ڲ����п��Զ��洢�� */
/* ��֤�������� */

struct book
{
	int a;
	int b;
	int c;
};



int main(void)
{
	struct book lib1;
	lib1 = (struct book)    {.a = 6, .b = 8, .c = 10};
	printf("a:%d b:%d c:%d", lib1.a, lib1.b, lib1.c);

	return 0;
}
