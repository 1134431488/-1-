#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
	FILE *fp;
	char words[MAX];

	if((fp = fopen("wordy", "a+")) == NULL) //�ı�ģʽ���ļ���"a+"���ļ�ĩβ׷���ı�����
	{
		fprintf(stdout, "Can't open \"wordy\" file.\n"); //����ַ�������ʾ��"�޷���\"wordy\"�ļ�"
		exit(EXIT_FAILURE); //�쳣����
	}

	puts("Enter words to add to the file; press the #"); //����Ҫ��ӵ��ļ��еĵ���;��#
	puts("key at the beginning of a line to terminate."); //����Ҫ��ֹ���п�ͷ�ļ�
	while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) //�Ӽ�������ȡ�ַ���words����#����
		fprintf(fp, "%s\n", words); //���words�ַ������ļ�

	puts("File contents:"); //�ļ�����
	rewind(fp); /*���ص��ļ���ʼ��*/
	while(fscanf(fp, "%s", words) == 1) //���ļ���ȡ�ַ�����words�ַ���������
		puts(words); //���words�ַ�������ʾ��

	puts("Done!");
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	remove("wordy"); //ɾ��Ŀ¼�ڵ��ļ�
	return 0;
}
