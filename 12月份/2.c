#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int static_store = 30;  //文件作用域外部链接静态存储期整数型变量
const char *pcg = "String Literal";	//文件作用域外部链接静态存储期只读字符型指针变量

int main(void)
{
	int auto_store = 40;	//块作用域无链接自动存储期整数型变量
	char auto_string [] = "Auto char Array";	//块作用域无链接自动存储期字符数组型变量
	int * pi;	//块作用域无链接自动存储期整数型指针变量
	char * pcl;	//块作用域无链接自动存储期字符型指针变量

	pi = (int *) malloc(sizeof(int));   //动态分配4个字节内存空间，且使得pi指向它
	*pi = 35;	//对指针*pi赋值
	pcl = (char *) malloc(strlen("Dynamic String") + 1);//获取字符串有效字符数，+1是指多分配一个空间给空字符，strlen不会把空字符当成有效字符
	strcpy(pcl, "Dynamic String");//拷贝字符串给pcl

    printf("文件作用域静态变量：\n");
	printf("%-10d	%p\n", static_store, &static_store);
	printf("%-10s	%p\n", pcg, pcg);
	putchar('\n');
	printf("块作用域自动变量：\n");
	printf("%-10d	%p\n", auto_store, &auto_store);
	printf("%-10s	%p\n", auto_string, auto_string);
	putchar('\n');
	printf("动态内存分配变量：\n");
	printf("%-10s	%p\n", pcl, pcl);
	printf("%-10d	%p\n", *pi, pi);
	putchar('\n');
	printf("一般的静态字符串字面量:\n");
	printf("%-10s	%p\n", "Quoted String", "Quoted String");
	free(pi);
	free(pcl);

	return 0;
}
