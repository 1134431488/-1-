#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXBKS	10
char * s_gets(char st, int n);	//�������� 
char * s_gets(char st, int n)	//��������
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);	//�ӱ�׼�����������̣���ȡ����
	printf("ret_val = %s\n", ret_val);
	if(ret_val != NULL)
	{
		find = strchr(st, '\n');	//�������ı��� ���ҵ��ַ�
		if(find != NULL)
			*find = '\0';
		else
			while(getc(stdin) != '\0')	//������(������)�л�ȡ�ַ�������ȥ(û�н���getc()�����ķ���ֵ)
				continue;
	}
	return ret_val;
}

struct book {
	char title[MAXTITL];	
};

int main(void)
{
	struct book library[MAXBKS];	/* �ṹ���� */
	int count = 0;
	int index, filename;
	FILE * fp;
	int size = sizeof(struct book);	/* �õ��ṹ�����ʹ�С��������д�ļ������Ĳ��� */
	
	if((fp = fopen("books.dat", "a+b")) == NULL)
		fputs("���ļ�ʧ�ܣ�\n", stderr), exit(1);
	rewind(fp);	/* �ļ�λ��ָʾ���ƶ����ļ���ʼ�ֽ� 0�ֽڵ�λ�� */
//	fseek(fp, 0L, SEEK_SET);	//ͬ�����  469ҳ  
	return 0;
}
