#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40

int main(void)
{
	const char * orig = WORDS;
	char copy[SIZE] = "Be the best that you can be.";
	char * ps;

	puts(orig);
	ps = strcpy(copy + 7, orig);
	printf("����1�仯��");//������Ǳ�����������������Ԫ�ص�ַ
	puts(copy);
	printf("����ֵ�仯��");//������ǲ���1copy+7�ĵ�ַ
	puts(ps);
	int i;
	printf("%d\n", sizeof(copy));
	for(i = 0; i < sizeof(copy); i++)
		putchar(copy[i]);
	return 0;
}
//strcpy()���������������õ����ԣ���һ��strcpy()ָ��ķ���������char * ���ú������ص��ǵ�һ����������ʼ��ַ
//�ڶ��㣬��һ����������ָ������Ŀ�ʼ��ַ��������Կ��������ַ��������������ĳһ����
//����˵���в���Ĺ���
