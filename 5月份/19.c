#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char *st, int n);

int main(void)
{
	char flower[SIZE];
	char addon [] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;

	puts("What is your favorite flower?");
	s_gets(flower, SIZE);
	if((strlen(addon) + strlen(flower) + 1) <= SIZE)
		strcat(flower, addon);
	puts(flower);
	puts("What is your favorite bug?");

	s_gets(bug, BUGSIZE);	// ��bug��ֵ�ַ��������ַ������ó���BUGSIZE 13 ���ַ� 0 - 12 ��13�����ǿ��ַ� 
	available = BUGSIZE - strlen(bug) - 1;	//��intֵ�� 13 - �õ��ַ����Ĵ�С������1 
	printf("result  =  %d\n", strlen(bug)); 
	strncat (bug, addon, available);	//�������3��0�����ʾû��ʣ��ռ䣬�޷�ƴ�� 
	puts(bug);
	
	
	char h[4] = "123";
	strncat(h, "456666", -1);	//����3Ϊ���������־�Ȼ����ƴ�� 
	puts(h); 
	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		while(st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else if(st[i] == '\0')
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
