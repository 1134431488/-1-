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
	printf("参数1变化：");//输出的是被拷贝插入的数组的首元素地址
	puts(copy);
	printf("返回值变化：");//输出的是参数1copy+7的地址
	puts(ps);
	int i;
	printf("%d\n", sizeof(copy));
	for(i = 0; i < sizeof(copy); i++)
		putchar(copy[i]);
	return 0;
}
//strcpy()函数还有两个有用的属性，第一，strcpy()指向的返回类型是char * ，该函数返回的是第一个参数的起始地址
//第二点，第一个参数不必指向数组的开始地址，这个属性可以用于字符串拷贝到数组的某一部分
//可以说具有插入的功能
