#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int main(void)
{
	fprintf(stdout, "%s\n", "������»���Խ�");
	fprintf(stdout, "%s\n", "��Ҷ���᲻�ܳ���");
	fprintf(stdout, "%s\n", "��ס��ɽ�ް��ۣ�");
	fprintf(stdout, "%s\n", "����Ѩ����ʱѱ��");

	FILE * fp;
	char words[MAX];

	if((fp = fopen("wordy", "a+")) == NULL)//��wordy�ļ����ɶ�д�����ļ�ĩβ�����Ϣ
	{
		fprintf(stdout, "���ܴ�\"wordy\"�ļ�.\n");
		exit(EXIT_FAILURE);
	}
	puts("����Ҫ��ӵ��ļ��еĵ���;��#");
	puts("����Ҫ��ֹ���п�ͷ�ļ���");
	while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) //�Ӽ��̻�ȡ��Ϣ��words char����
		fprintf(fp, "%s\n", words); //��words�����������fp�ļ�ָ��
	puts("�ļ�����:");
	rewind(fp); /*���ص��ļ���ʼ��*/
	while(fscanf(fp, "%s", words) == 1) //���ļ���ʼ����ȡ��Ϣ��words����
		puts(words);    //��������ȡ������Ϣ
	puts("Done!");
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");

	return 0;
}
