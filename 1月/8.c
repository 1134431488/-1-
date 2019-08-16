#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char *argv [])
{
	FILE *in, *out;
	int ch;
	char name[LEN];
	int count = 0;

	if(argc < 2)
	{
		fprintf(stderr, "����0 %s \n", argv[0]);    //�����л�ȡ�ַ���С��2�����˳�
		exit(EXIT_FAILURE);
	}
	if((in = fopen(argv[1], "r") ) == NULL) //������������ĵڶ����ַ����ļ������ļ����������˳�
	{
		fprintf(stderr, "����1 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	strncpy(name, argv[1], LEN - 5);    //�����ļ���
	name[LEN -5] = '\0';    //�ļ���ĩβ+���ַ�
	strcat(name, ".red");   //name = argv[1] + ".red"
	if((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "���ļ������ڣ���wģʽ���½��ļ�����ʧ���ˣ�\n");
		fprintf(stderr, "�����ڴ�ռ䲻����ԭ��\n");
		exit(3);//�Է�0ֵ��ʾ�쳣ʧ��
	}
	while((ch = getc(in)) != EOF)   //��argv[1]�ļ���ȡ�ַ���Ϣ
	{
		if(count++ % 3 == 0) //��û��������ʱ��count��0��ʼβ����0/3,3/3,6/3,9/3......
		{
			putc(ch, out);  //�����out�ļ�ָ��ָ����ļ������ܻᾭ��������
		}
	}
	if(fclose(in) != 0 || fclose(out) != 0) //Ϊ0������������ΪEOF���쳣ʧ�ܽ���
	{
		fprintf(stderr, "�ļ�fclose����ʧ�ܣ�\n");
	}
	return 0;
}
