#include <stdio.h>
#define STLEN 5
int main(void)
{
	char words[STLEN];
	words[5] = 'A'; 
	puts("Enter a string, please.");
	gets(words);//输入小于5的字符，原先第5位A会被覆盖掉 
	printf("Your string twice:\n");
	printf("%s\n",words);
	puts(words);
	puts("Done.");
	return 0;
 } 
