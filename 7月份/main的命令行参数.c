#include <stdio.h>
#include <stdlib.h>//atoi被此头文件包含
int main(int argc, char *argv [])
{
	int i, times;
	times = atoi(argv[1]);//argv[1]字符串转化为整数存储在times中
	if(argc < 2 || times < 1)//如果接收的字符串小于2 或者 times的数值小于1
	{
		printf("%s\n第二个字符串必须是一个大于0的数值\n", argv[0]);
	}
	else
	{
		for(i = 0; i < times; i++)
		{
			puts("You did very well!");
		}
	}
	return 0;
}
/*
时间：2018.7.17
C语言与命令行参数之间的联系，可以通过命令行写字符串，由入口main函数的第二个字符串指针数组去接收
main的第一个参数是一个整数，用于计算有多少个字符串个数，而这个字符串指针数组的第一个元素存储的
是程序的完整路径，第二个元素存储的才是程序所需要的参数。
可以通过传入数值字符串，用atoi函数将字符串转化为整数进行使用
*/
