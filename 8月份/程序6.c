#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];

	puts("Enter string (empty line to quit):");
	
	printf("%#X %#X\n",words, fgets(words, STLEN, stdin));//����гɹ���ȡ��ֵ��ַ��ͬ
	while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
	{
		
		fputs(words, stdout);//windows������ctrl+zֱ���˳�����
	}
	puts("Done!");

    
	return 0;
}
