#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "hello world";
	char str1[47] = "hello world thanks";
	//备注：空字符没有长度，空字符只有大小，strlen返回长度。sizeof返回大小
	printf("sizeof pointer char %d \nstrlen length %d\n", sizeof(str), strlen(str));
	printf("sizeof size char %d \nstrlen length %d\n", sizeof(str1), strlen(str1));
	return 0;
}
