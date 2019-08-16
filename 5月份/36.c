#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define CNTL_Z '\032'
#define SLEN 81
int main(void)
{
	char file[SLEN];
	char ch;
	FILE * fp;
	long count, last;

	puts("Enter the name of the file to be processed:");	//����Ҫ������ļ�������

//	scanf("%80s", file);
	strncpy(file, "temp.txt", sizeof("temp.txt"));	//����ָ���ֽڴ�С���ַ�����file��sizeof���Ի�ȡ�ַ����������Ĵ�С����һ��ָ��Ĵ�С�̶���8(64λ����) 
	printf("file = %s\n", file);
	if((fp = fopen(file, "rb")) == NULL)
	{
		printf("reverse can't open %s\n", file);	//����򲻿�
		exit(EXIT_FAILURE);
	}

	fseek(fp, 0L, SEEK_END);	//��λ���ļ�ĩβ��ƫ��0�ֽ�
	last = ftell(fp);	//�õ��ļ�λ��ָʾ���ĵ�ǰλ��
	for(count = 1L; count < last; count++)
	{
		fseek(fp, -count, SEEK_END);	/* ���� */
		ch = getc(fp);	//��fp�ļ���������ȡ�ַ�
		if(ch != CNTL_Z && ch != '\r')/* MS-DOS �ļ�*/
			putchar(ch);
	}
	putchar('\n');
	fclose(fp);

	return 0;
}
