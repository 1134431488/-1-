#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc , char * argv[])
{
	FILE *in, *out;	//��������ָ��FILE��ָ��
	int ch;
	char name[LEN];	//��������ļ���
	int count = 0;

	//����������
	if(argc < 2)	//argc���û���cmd�����õ��ַ���������������С������1��ʼ 
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);

	}
	//��������
	if((in = fopen(argv[1], "r")) == NULL)	//ʹ��argv����ĵڶ���Ԫ�� 
	{
		fprintf(stderr, "I couldn't open the file\"%s\"\n",	//���޷����ļ�%s\ n
		        argv[1]);
		exit(EXIT_FAILURE);	//�����쳣��ֹ 
	}
	//�������
	strncpy(name, argv[1], LEN - 5);	//�����ļ��������������ַ�
	name[LEN - 5] = '\0';
	strcat(name, ".red");	//���ļ��������.red
	if((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "Can't create output file.\n");	//�޷���������ļ���
		exit(3);
	}
	//��������
	while((ch = getc(in)) != EOF)
		if(count++ % 3 == 0)
			putc(ch, out);	//��ӡ3�ַ��ĵ�һ���ַ����ļ�
	//��β����
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
