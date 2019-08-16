#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int static_store = 30;
const char *pcg = "String Literal";
int main(void)
{
	int auto_store = 40;
	char auto_string [] = "Auto char Array";
	int * pi;
	char * pcl;

	pi = (int *) malloc(sizeof(int));
	*pi = 35;
	pcl = (char *) malloc(strlen("Dynamic String") + 1);//动态分配空间
	strcpy(pcl, "Dunamic String");//对其赋值
	//外部链接以及常量的内存地址占用一个区域
	printf("static_store: %d at %X 外部链接变量\n", static_store, &static_store);//外部链接变量 30
	printf("  %s at %X 只读外部链接变量\n", pcg, pcg);//只读外部链接变量 "String Literal"
	printf("   %s at %X 块内常量\n\n", "Quoted String", "Quoted String");//常量字符串输出
	//无链接的自动变量的内部地址占用另一个区域
	printf("  auto_store: %d at %X 无链接变量\n", auto_store, &auto_store);//无链接变量 40
	printf(" %s at %X 无链接变量\n\n", auto_string, auto_string);//无链接变量 "Auto char Array";
	//动态内存分配变量的内部地址占用第3个区域
	printf("  %s at %X 动态内存分配变量\n", pcl, pcl);//动态内存分配变量 Dynamic String
	printf("	 *pi: %d at %X 动态内存分配变量\n", *pi, pi);//动态内存分配变量 35

	free(pi);
	free(pcl);

	return 0;
}
