#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 40
#define MAXAUTL	40
#define MAXBKS	100	/*�鼮���������*/

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library [MAXBKS];	/*book���ͽṹ������*/
	int count = 0;	/*����*/
	int index;	/*����*/

	printf("����������.\n");
	printf("���׿�ʼ������[enter]��ֹͣ��\n");
	printf("library[count].title=%#X"
	       "\n&library[count].title=%#X\n", library[count].title,
	       &library[count].title);

	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL)
	{
		if(library[count].title[0] == '\0')
			break;

		printf("������������.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);	/*countβ����*/

		while(getchar() != '\n')
			continue;	/*clear��׼�������ַ�*/

		if(count < MAXBKS)
			printf("������һ������.\n");
	}

	if(count > 0)
	{
		printf("��������鵥:\n");
		for(index = 0; index < count; index++)
			printf("[%s] by [%s]: $[%.2f]\n", library[index].title,
			       library[index].author, library[index].value);
	}
	else
		printf("û������?̫�����.\n");

	return 0;
}

char * s_gets(char *st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');	/*���һ��з�*/

		if(find)	/*�����ַ����NULL*/
			*find = '\0';	/*�ڴ˴�����һ�����ַ�*/
		else
			while(getchar() != '\n')
				continue;	/*����������ʣ����ַ�*/
	}

	printf("title = %s\n", st);

	return ret_val;
}
