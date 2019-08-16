#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];

	puts("Enter string (empty line to quit):");
	
	printf("%#X %#X\n",words, fgets(words, STLEN, stdin));//如果有成功获取数值地址相同
	while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
	{
		
		fputs(words, stdout);//windows下运行ctrl+z直接退出运行
	}
	puts("Done!");

    
	return 0;
}
