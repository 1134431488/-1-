#include <stdio.h>
/*
Ŀ��:һ���ṹ�����ı�ʶ������һ����ַ�����������������һ����ַ
Ȼ������ѽṹ����Ϊ���飬���ı�ʶ������һ�������������ǽṹ��
���ֱ��ʹ�ýṹ���������Ƿ�ȼ�ʹ�õ�һ���ṹԪ�أ���������:
 */
struct book
{
	int value;
	int index;	/* �������ǳ�ʼ�������һ��Memory Declaration�����зֺ� */
};

int main(void)
{
	struct book library[2] =
	{
		{
			.value = 999,
			.index = 888	/* 888������ԼӶ���Ҳ���Բ��� */
		},
		{
			.value = 777,
			.index = 666
		}
	};
//	printf("library.value = %d library.index = %d\n", library.value, library.index);	/* ��ʶ����� */
	for(int n = 0; n < 4; n++)	/*��������0 - 3�±귶Χ���²�����Ԫ�ص�ַ��������*/
		printf("%-10d    library[0] + %d %#X\n", *(library + n), n, library + n);	/* �ṹ��result���ṹ����Ԫ�ص�ַ���������ģ����ֶϲ� */
	putc('\n', stdout);
	for(int n = 0; n < 2; n++)	/* ��ֵ����⣬���һ��ѭ���������� */
		printf("%-10d    library[1] + %d %#X\n", *(&library[1] + n), n, &library[1] + n);
	printf("\n%#X %#X\n\n", &library[1], library[1].index);
	for(int n = 0; n < 2; n++)
	{
		printf("library[%d].value = %d\n", n, library[n].value);
		printf("library[%d].index = %d\n", n, library[n].index);
	}
	
	puts("�������һ�����нṹ���г�ԱAddress");
	for(int n = 0; n < 2; n++)
	{
		printf("index:%#X\nvalue:%#X\n", library[n].value, library[n].index);
	}
	return 0;
}

