#include <stdio.h>
#define STLEN 5
int main(void)
{
	char words[STLEN];
	words[5] = 'A'; 
	puts("Enter a string, please.");
	gets(words);//����С��5���ַ���ԭ�ȵ�5λA�ᱻ���ǵ� 
	printf("Your string twice:\n");
	printf("%s\n",words);
	puts(words);
	puts("Done.");
	return 0;
 } 
