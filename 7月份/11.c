#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100	/*�鼮���������*/
struct book
{
	char 	title[MAXTITL];
	char 	author[MAXAUTL];
	float 	value;
};
int main(void)
{
	struct book library[MAXBKS];	/*book���͵Ľṹ����*/
	int count = 0;
	int index;

	puts("��������");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		puts("��������");
		s_gets(library[count].author, MAXAUTL);
		puts("����۸�");
		scanf("%f", &library[count++].value);
		while(getchar() != '\n')
			continue;	/*�����׼stdin������*/
		if(count < MAXBKS)
			puts("��������");
	}
	if(count > 0)	//�������ṹ�����������ݣ����������ṹ���������
	{
		for(index = 0; index < count; index++)
			printf("%s %s %.2f\n",
			       library[index].title,
			       library[index].author,
			       library[index].value);
	}
	else
		puts("δ��ȡ���κ��鼮����Ϣ��");

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
				continue;
	}

	return ret_val;
}
