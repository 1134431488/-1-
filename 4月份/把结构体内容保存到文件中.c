#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL	40
#define MAXAUTL 40
#define MAXBKS	10	/* ���ͼ������ */
char * s_gets(char * st, int n);
struct book  	/* ����bookģ�� */
{
	char 	title[MAXTITL];
	char 	author[MAXAUTL];
	float 	value;
};
int main(void)
{
	struct book library[MAXBKS];	/* �ṹ���� */
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);	/* ��ȡ�ṹ���ʹ�С */
	if ((pbooks = fopen("book.dat", "ab+")) == NULL)
	{
		fputs("�޷���book.dat�ļ�\n", stderr);	/* ��׼���� */
		exit(1);
	}
	rewind;	/* ��λ���ļ���ʼ */
	//fread()�����ѽṹ������ÿ��Ԫ�صĵ�ַ��Ϊ��������Ϣ�洢�Ŀռ� 
	while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)	//0 - 9, fread()�������ز���3������1�Ǵ��������ݴ�ŵ�ַ������2Ϊ��С������3Ϊ��ȡ�������������Ƕ�ȡ���ļ���
	{
		if(count == 0)	//��һ��ѭ��
			puts("��ǰͼ��Ŀ¼:");
		printf("%s	by %s: $%.2f\n", library[count].title,
		       library[count].author, library[count].value);
		count++;		//���������count��ֵ 
	}
	filecount = count;	//�����Ľṹ�������ļ�������ͼ������ 
	if(filecount > 0)
		printf("filecount��%d\n", filecount);
	if(count == MAXBKS)	//�������10�����ʾ���� 
	{
		fputs("book.dat�ļ�����.", stderr);
		exit(2);
	}
	puts("���������������.");
	puts("һ�п�ʼ����[enter]��ֹͣ.");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL	//����鼮û�������������ȡ 
	        && library[count].title[0] != '\0')
	{
		puts("�����������ߡ�");
		s_gets(library[count].author, MAXAUTL);
		puts("��������ֵ��");
		scanf("%f", &library[count++].value);	//�˴�count���� 
		while(getchar() != '\n')
			continue;	/* �����׼������ */
		if(count < MAXBKS)
			puts("������һ�����⡣");
	}
	printf("contu = %d\n", count);			//�������鼮���� 
	printf("filecount = %d\n", filecount);	//֮ǰ�ļ��ڵ��鼮���� 
	if (count > 0)
	{
		puts("��������鵥:");
		for(index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
			       library[index].author, library[index].value);
		fwrite(&library[filecount], size, count - filecount, pbooks);	//����ṹÿ��Ԫ�ص��׵�ַ��Ϊ��д������� 
	}
	else
		puts("û������?̫�����.\n");
	puts("Bye.\n");
	fclose(pbooks);

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
