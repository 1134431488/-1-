#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void)
{
//	char * p;
////	p =  (char *) malloc(sizeof(char) * strlen("ѧϰ"));
//	strcpy(p, "ѧϰ");	//�����ַ�����һ���洢���̣�����һ��ָ�����
//	//strcpy��strncpyĿ���ַ���Ҫ�д洢�ռ���ܿ��� 
//	printf("p = %#X \nѧϰ = %#X\n", p, "ѧϰ"); 
	puts("�ڶ��׶�");
	const char * orig = WORDS;
	char copy[SIZE] = "Be the best that you can be.";
	char * ps;
	puts("orig");
	puts(copy);
	ps = strcpy(copy + 7, orig);
	puts(copy);
	puts(ps);
	
	return 0;
}
