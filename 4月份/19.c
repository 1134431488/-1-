#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
struct namect
{
	char * fname;
	char * lname;
	int letters;
};

void getinfo(struct namect *);	/* ����memory */
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *); 	/* �ͷ�memory */
char * s_gets(char * st, int n);

int main(void)
{
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}

void getinfo(struct namect * pst)	/* ָ��ṹ���ַ�Ľṹ��ָ�� */
{
	char temp[SLEN];
	printf("Please enter your first name.\n");	/* ������������ */
	s_gets(temp, SLEN);
	// �����ڴ��Դ�����
	pst->fname = (char *) malloc(strlen(temp) + 1);	/* temp�ַ����ȣ����ַ��޳��ȡ�+ 1Ԥ��һ����С�����ַ���β */
	// ������������̬������ڴ���
	strcpy(pst->fname, temp);
	printf("Please enter your last name.\n"); /* ������������ */
	s_gets(temp, SLEN);
	pst->lname = (char *) malloc(strlen(temp) + 1);	/* �����ڴ洢���� */
	strcpy(pst->lname, temp);	/* ����temp�����ݶ������̬����ĵ�ַ�ռ�洢 */
}

void makeinfo(struct namect * pst)
{
	pst->letters = strlen(pst->fname) +
	               strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
	printf("%s %s, your name contains %d letters.\n",
	       pst->fname, pst->lname, pst->letters);	/* �������ְ���%d��ĸ */
}

void cleanup(struct namect * pst)
{
	free(pst->fname);
	free(pst->lname);
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);	/* �Ӽ�������ȡ���� */
	if(ret_val != NULL)
	{
		find = strchr(st, '\n');	/* Ѱ�һ��з� */
		if(find != NULL)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
