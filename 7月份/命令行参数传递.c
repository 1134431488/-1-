#include <stdio.h>

int main(int argc, char * argv[])
{
	printf("argc = %d\n", argc);//��ʽ�����
	while(argc)
		printf("%s\n", argv[--argc]);
	return 0;
}
