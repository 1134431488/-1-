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
		while(words[i] != '\n' && words[i] != '\0')//�����ַ����������з��Ϳ��ַ��˳�ѭ��
			i++;
		if(words[i] == '\n')	//�������з�������������ȫ���Ա����ɡ�
			words[i] = '\0';
		else	//�������ַ�����ʼ���������������������Ĳ���
		{
			//����������ַ�����words�������ɵĴ�С�����ȡһ���֣���һ����û�л��з���β����ʣ�ಿ�ִ����з� 
			//����fgetsʼ�������������2��1���ֽڴ�С���򱣳ֲ���1����ĩβԪ��ʼ���ǿ��ַ��� 
			while(getchar() != '\n')
				continue;
		}

		puts(words);
	}
	puts("Done!");

	return 0;
}
