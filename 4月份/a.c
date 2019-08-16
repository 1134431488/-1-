#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words [STLEN];
	puts("Enter string (empty line to quit):");
	while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')	//如果函数读到文件结尾，返回空指针
		fputs(words, stdout);
	puts("Done.");

	return 0;
}
