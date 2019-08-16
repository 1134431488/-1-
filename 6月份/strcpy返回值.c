#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[20] = "111111111111";
	int length = strlen( strcpy(str+2, "Hello World") );
	printf("数组的长度%d\n", strlen(str) );
	printf("拷贝函数返回值长度length %d\n", length);
	printf("%#X\n",str+2);
	printf("%#X\n",strcpy(str+2, "Hello World") );
	return 0;
}
/*拷贝函数返回值是返回第一个参数的地址，这个地址不必指向数组的开始，
也可以是数组中的某一字符地址的开始*/ 
