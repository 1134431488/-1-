#include <stdio.h>
#include <string.h>	//�ṩstrcmp()�ȽϺ�����strchr()Ѱ�ҵ��ַ����� 
#include <stdbool.h>	//C99���� 
char * s_gets(char * st, int n);

enum spectrum { red, orange, yellow, green, blue, violet };
const char * colors[] = { "rad", "orange", "yellow","green", "blue", "violet" };
#define LEN 30

int main(void)
{
	char choice[LEN];
	enum spectrum color;
	bool color_is_found = false;

	puts("Enter a color (empty line to quit):");
	while(s_gets(choice, LEN) != NULL && choice[0] != '\0')	//�ӱ�׼�����ȡһ���ַ��� 
	{
		for(color = red; color <= violet; color++)	//ö�ٱ��� 
		{
			if(strcmp(choice, colors[color]) == 0)	//�Ƚ��ַ�����ö��������Ӧ�����ַ����Ƿ���ͬ 
			{
				color_is_found = true;	//�����ͬ���˳�ѭ������������ִ�� 
				break;	//�˳�ѭ��������color���ٴε���������switch��� 
			}
		}
		
		if(color_is_found)	//���Ϊ�� 
			switch(color)	//ʹ�õ�ǰ��ö��������Ȼ�������Ӧ����� 
			{
				case red :
					puts("Roses are red.");
					break;
				case orange :
					puts("Poppies are orange.");
					break;
				case yellow :
					puts("Sunflowers are yellow.");
					break;
				case green :
					puts("Grass is green.");
					break;
				case blue :
					puts("Bluebells are blue.");
					break;
				case violet :
					puts("Violet are violet.");
					break;
			}
		else
			printf("I don't know about the coloe %s.\n", choice);
		color_is_found = false;
		puts("Next color, please (empty line to qiut):");
	}
	puts("Goodbye!");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;	//����������
	}
	return ret_val;
}
