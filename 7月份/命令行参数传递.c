#include <stdio.h>

int main(int argc, char * argv[])
{
	printf("argc = %d\n", argc);//格式化输出
	while(argc)
		printf("%s\n", argv[--argc]);
	return 0;
}
