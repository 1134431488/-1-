#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *in, *out, *et_1, *et_2;
	int ch_1, ch_2, count = 0;
	char *name_1, *name_2, *encrypt_1, *encrypt_2;  //2���ļ���
	name_1 = "C:\\Users\\lenovo\\Desktop\\C����Դ��\\1��\\Դ�ļ�.txt";
	name_2 = "C:\\Users\\lenovo\\Desktop\\C����Դ��\\1��\\�����ļ�.txt";
	encrypt_1 = "C:\\Users\\lenovo\\Desktop\\C����Դ��\\1��\\�����ı�1.txt";
	encrypt_2 = "C:\\Users\\lenovo\\Desktop\\C����Դ��\\1��\\�����ı�2.txt";


	if((in = fopen(name_1, "r")) == NULL)//��ģʽ���ļ�
	{
		fprintf(stderr, "����0��\n");
		exit(EXIT_FAILURE);
	}
	if((out = fopen(name_2, "w+")) == NULL)//дģʽ���ļ�
	{
		fprintf(stderr, "����1��\n");
		exit(EXIT_FAILURE);
	}
	if((et_1 = fopen(encrypt_1, "w+")) == NULL)//��д(����)ģʽ���ļ�
	{
		fprintf(stderr, "����1����\n");
		exit(EXIT_FAILURE);
	}
	if((et_2 = fopen(encrypt_2, "w+")) == NULL)//��д(����)ģʽ���ļ�
	{
		fprintf(stderr, "����2����\n");
		exit(EXIT_FAILURE);
	}
	//��ʼ��������ı�
	while((ch_1 = getc(in)) != EOF)//��Դ�ļ�.txt��ȡ��Ϣ
		if(count++ % 3 == 0)     //ÿ3���ַ��ĵ�һ���ַ�����������ı�1
			putc(ch_1, et_1);
		else
			putc(ch_1, et_2);      //ÿ3���ַ��ĵ�һ���ַ�������ַ�����������ı�2
	//��ʼ��������ı�
		count = 0;  //��ʼ��
		while((ch_1 = getc(et_1)) != EOF && (ch_2 = getc(et_1)) != EOF)//��Դ�ļ�.txt��ȡ��Ϣ
		if(count++ % 3 == 0)     //ÿ3���ַ��ĵ�һ���ַ�����������ļ�.txt
			putc(ch_1, out);
		else
			putc(ch_2, out);      //ÿ3���ַ��ĵ�һ���ַ�������ַ�����������ļ�.txt
	puts("���гɹ���\n");
	fprintf(stdout, "in=%d out=%d et_1=%d et_2=%d\n", fclose(in), fclose(out), fclose(et_1), fclose(et_2) );    //�ر��ļ�

	return 0;
}
