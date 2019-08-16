#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void)
{
//	char * p;
////	p =  (char *) malloc(sizeof(char) * strlen("学习"));
//	strcpy(p, "学习");	//拷贝字符串是一个存储过程，不是一个指向过程
//	//strcpy和strncpy目标字符串要有存储空间才能拷贝 
//	printf("p = %#X \n学习 = %#X\n", p, "学习"); 
	puts("第二阶段");
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
