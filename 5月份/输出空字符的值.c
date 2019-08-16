#include <stdio.h>
#define k '\0'
int main(void)
{
	printf("空字符和空白字符的区别,在[]中间打印\n");
	printf("[%c]\n", k);
	printf("[%c]\n", ' ');
	printf("当两者整数输出的区别\n");	
	printf("%d\n", k);
	printf("%d\n", ' ');
	return 0;
}
