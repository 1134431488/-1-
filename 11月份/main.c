#include <stdio.h>
static int a = 1;//�ⲿ���ӱ���
extern int b;//����ʽ�����ⲿ���ӱ���
extern float c;//����ʽ�����ⲿ���ӱ���
extern double d;//����ʽ�����ⲿ���ӱ���
extern char e;//����ʽ�����ⲿ���ӱ���

int main(void)
{
	printf("�ļ�1���ⲿ����a��ַ��%X\n", &a);
	printf("�ļ�2���ⲿ����b��ַ��%X\n", &b);
	printf("�ļ�2���ⲿ����c��ַ��%X\n", &c);
	printf("�ļ�2���ⲿ����d��ַ��%X\n", &d);
	printf("�ļ�2���ⲿ����e��ַ��%X\n", &e);
	return 0;
}
