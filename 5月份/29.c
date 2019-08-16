#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])	//argc记录传入的参数个数 
{
	int i, times;
	
	printf("你传入了%d个字符串\n", argc);
	if(argc < 2 || (times = atoi(argv[1])) < 1)
		printf("小于1：Usage: %s positive-number\n", argv[0]);
	else
		for(i = 0; i < times; i++)
			puts("大于1：Hello, good looking!");
	return 0;
}
