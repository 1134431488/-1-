#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
int main(int argc, char * argv[])
{
	FILE *int, *out;    //�������������ļ�ָ�룬������������Ϣ
	int ch; //��¼EOF���ַ�
	char name[LEN];     //�ļ����洢
	int count = 0;
	
	//��������в���
	if(argc < 2)
	{
		fprintf(stderr, "����ȱ�٣��ļ����� %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	//��������
	if((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "�Ҵ򲻿��ļ� %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//�������
	strncpy(name, argv[1], LEN - 5);    //�����ļ���
	name[LEN - 5] = '\0';
	strcat(name, ".red");   //���ļ��������.red
}
