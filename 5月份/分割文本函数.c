#include <stdio.h>
#define SIZE 2
void csplit(char [], char, char *[50] );

int main(void)
{
	char *p[50];
	int n;
	csplit("���ֿ�.txt", '|', p);
	//for(n = 0; n < 50 && ; n++)
	return 0;
}
void csplit(char string[], char fs, char *p[50])//����1���ļ�·�� ����2�����ڷָ�ĵ����ַ�
{
	FILE *fp = fopen(string,"r");
	char text[SIZE];
	int n = 0;
	
	while(fgets(text, SIZE, fp))//fgets�����ԣ�����2 Ϊint 2 ֻ�ܻ�ȡ1���ַ���ĩβ�Զ���ȫ'\0'
	{
		if(text[0] != fs)//�����ڴ���ȥ���ķָ���
			//fputs(text, stdout);
			*p[n] = text;
	}
	fclose(fp);//�ر��ļ� 
}
