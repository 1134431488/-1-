#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("strcmp(\"A\", \"A\") is ");
	printf("%d\n", strcmp("A", "A"));//��ֵ������ֵ��strcmp����һ���� 0
	
	printf("strcmp(\"A\" \"B\") is ");
	printf("%d\n", strcmp("A", "B"));//��ֵС����ֵ��-1 
	
	printf("strcmp(\"B\" \"A\") is ");//��ֵ������ֵ��1 
	printf("%d\n", strcmp("B", "A"));
	
	printf("strcmp(\"C\" \"A\") is ");//��ֵ������ֵ��1  
	printf("%d\n", strcmp("C", "A"));
	
	printf("strcmp(\"Z\" \"a\") is ");//��ֵС����ֵ��-1 
	printf("%d\n", strcmp("Z", "a"));
	
	//printf("%d %d\n", 'Z', 'a');//��ֵ����ֵС��strcmp����һ������ -1 
	
	printf("strcmp(\"apples\" \"apple\") is ");
	printf("%d\n", strcmp("apples", "apple"));//��ֵ����ֵ��strcmp����һ������ 1 
	
	return 0;
 } 
