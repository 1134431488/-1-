#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];
	int i;

	puts("Enter string (empty line to quit);");
	while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
	{
		i = 0;
		while(words[i] != '\n' && words[i] != '\0')//跳过字符，遇到换行符和空字符退出循环
			i++;
		if(words[i] == '\n')	//遇到换行符，输入内容完全可以被容纳。
			words[i] = '\0';
		else	//遇到空字符，开始丢弃输入流缓冲区里多余的部分
		{
			//如果输入流字符大于words所能容纳的大小，则截取一部分，这一部分没有换行符结尾，而剩余部分带换行符 
			//由于fgets始终限制输入参数2减1个字节大小，则保持参数1数组末尾元素始终是空字符。 
			while(getchar() != '\n')
				continue;
		}

		puts(words);
	}
	puts("Done!");

	return 0;
}
