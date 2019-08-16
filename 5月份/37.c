#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE * source, FILE * dest);
char * s_gets(char * st, int n);

int main(void)
{
	FILE * fa, * fs;	//faָ��Ŀ���ļ��� fsָ��Դ�ļ�
	int files = 0;	//���ӵ��ļ�����
	char file_app[SLEN];	//Ŀ���ļ�	destination
	char file_src[SLEN];	//Դ�ļ���	source
	int ch;

	puts("����Ŀ���ļ�����:");
	s_gets(file_app, SLEN);
	if((fa = fopen(file_app, "a+")) == NULL)
		fprintf(stderr, "���ܴ� %s\n", file_app), exit(EXIT_FAILURE);
	if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)	//����һ��ָ����С����ȫģʽ�Ļ�������fa
		fputs("�޷��������������\n", stderr), exit(EXIT_FAILURE);
	puts("�����һ��Դ�ļ�������(�����˳�):");
	while(s_gets(file_src, SLEN) && file_src[0] != '\0')
	{
		if(strcmp(file_src, file_app) == 0)	//�Ƚ��ļ���������������strcmp����0
			fputs("���ܽ��ļ����ӵ�����\n", stderr);
		else if((fs = fopen(file_src, "r")) == NULL)
			fprintf(stderr, "�޷��� %s\n", file_src);
		else
		{
			if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)	//����һ��ָ����С����ȫ��������fs
			{
				fputs("�޷��������뻺����\n", stderr);
				continue;	//������һ��ѭ������
			}
			append(fs, fa);	//����fs��fa�ļ���
			if(ferror(fs) != 0)	//�ļ���д����,������д���ִ���ferror()��������һ����0ֵ
				fprintf(stderr, "��ȡ�ļ����� %s.\n", file_src);
			if(ferror(fa) != 0)	//�ļ�δ����
				fprintf(stderr, "д���ļ����� %s.\n", file_app);
			fclose(fs);
			files++;
			printf("���ڸ��� %s �ļ�.\n", file_src);
			puts("Next file (empty line to quit):");
		}
	}
	printf("�����ɡ�%d���ӵ��ļ���\n", files);
	rewind(fa);	//�ص��ļ���ͷ
	printf("%s ����:\n", file_app);
	while((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("��ʾ��ɡ�");
	fclose(fa);

	return 0;
}

void append(FILE * source, FILE * dest)
{
	size_t bytes;
	static char temp[BUFSIZE];	//ֻ����һ��

	while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)	//��source�����ݶ�����򣬶����������ظ�bytes
		fwrite(temp, sizeof(char), bytes, dest);	//��temp������д��dest�ļ��У�������ļ������������뵽���������һ��
}

char * s_gets(char * st, int n)
{
	char * ret_val, * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val != NULL)
	{
		find = strchr(st, '\n');	//���һ��з�
		if(find != NULL)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
