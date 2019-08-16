#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("strcmp(\"A\", \"A\") is ");
	printf("%d\n", strcmp("A", "A"));//左值等于右值，strcmp返回一个零 0
	
	printf("strcmp(\"A\" \"B\") is ");
	printf("%d\n", strcmp("A", "B"));//左值小于右值，-1 
	
	printf("strcmp(\"B\" \"A\") is ");//左值大于右值，1 
	printf("%d\n", strcmp("B", "A"));
	
	printf("strcmp(\"C\" \"A\") is ");//左值大于右值，1  
	printf("%d\n", strcmp("C", "A"));
	
	printf("strcmp(\"Z\" \"a\") is ");//左值小于右值，-1 
	printf("%d\n", strcmp("Z", "a"));
	
	//printf("%d %d\n", 'Z', 'a');//左值比右值小，strcmp返回一个负数 -1 
	
	printf("strcmp(\"apples\" \"apple\") is ");
	printf("%d\n", strcmp("apples", "apple"));//左值比右值大，strcmp返回一个正数 1 
	
	return 0;
 } 
