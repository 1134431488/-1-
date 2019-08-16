#include <stdio.h>
int main(int argc, char * argv[])	//字符串数组的第0个元素是程序名 
{
	int count;
	printf("The command line has %d arguments:\n", argc - 1);
	for(count = 1; count < argc; count++)
		printf("%d: %s\n", count, argv[count]);
	printf("\n");
	
	return 0;
 } 
