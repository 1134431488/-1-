#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])	//argc��¼����Ĳ������� 
{
	int i, times;
	
	printf("�㴫����%d���ַ���\n", argc);
	if(argc < 2 || (times = atoi(argv[1])) < 1)
		printf("С��1��Usage: %s positive-number\n", argv[0]);
	else
		for(i = 0; i < times; i++)
			puts("����1��Hello, good looking!");
	return 0;
}
