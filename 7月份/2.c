#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS	10	/* ����鼮���� */
char * s_gets(char * st, int n);
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library[MAXBKS];	/* 	�ṹ���� */
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);

	if((pbooks = fopen("book.dat", "a+b")) == NULL)
	{
		fputs("�޷���book.dat�ļ�.\n", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(pbooks);	/* ��λ���ļ���ʼ */
	while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)	//��ȡ�ļ����ݵ��ṹ
	{
		if(count == 0)
			puts("��ǰͼ��Ŀ¼:");
		printf("%s by %s:$%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}
	filecount = count;
	if(count == MAXBKS)
	{
		fputs("�Ȿ���dat�ļ�����.", stderr);
		exit(2);
	}

	puts("���������������.");
	puts("��һ�п�ʼ����[enter]��ֹͣ.");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		puts("������������.");
		s_gets(library[count].author, MAXAUTL);
		puts("��������۸�.");
		scanf("%f", &library[count].value);
		count++;
		while(getchar() != '\n')
			continue;
		if(count < MAXBKS)
			puts("������������.");
	}
	if(count > 0)
	{
		puts("��������鵥:");
		for(index = 0; index < count; index++)
			printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
			fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else
		puts("No books? Too bad.\n");
	puts("Bye.\n");
	fclose(pbooks);	//�ͷ��ļ�ָ�� 
	
	return 0;
}

char * s_gets(char * st, int n)
{
	char * r;
	char * f;
	r = fgets(st, n, stdin);
	if(r)
	{
		f = strchr(st, '\n');
		if(f)
			*f = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return r;
 } 
