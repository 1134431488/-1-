#include <stdio.h>
int main(int argc, char * argv[])	//�ַ�������ĵ�0��Ԫ���ǳ����� 
{
	int count;
	printf("The command line has %d arguments:\n", argc - 1);
	for(count = 1; count < argc; count++)
		printf("%d: %s\n", count, argv[count]);
	printf("\n");
	
	return 0;
 } 
