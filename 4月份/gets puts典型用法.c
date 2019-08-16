#include <stdio.h> 
#define STLEN 81
int main(void)
{
	char words[STLEN];
	puts("Enter a string, please.");
	gets(words);//典型用法-获取字符串 
	printf("Your string twice:\n");
	printf("%s\n", words);
	puts(words);//-输出字符串在其末尾加上空字符'\0' 
	puts("Done.");
	
	return 0; 
}
