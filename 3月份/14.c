#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "hello world";
	char str1[47] = "hello world thanks";
	//��ע�����ַ�û�г��ȣ����ַ�ֻ�д�С��strlen���س��ȡ�sizeof���ش�С
	printf("sizeof pointer char %d \nstrlen length %d\n", sizeof(str), strlen(str));
	printf("sizeof size char %d \nstrlen length %d\n", sizeof(str1), strlen(str1));
	return 0;
}
