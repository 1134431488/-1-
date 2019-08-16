#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXBKS	10
char * s_gets(char *st, int n);	//��������
char * s_gets(char *st, int n)	//��������
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

struct book
{
	char title[MAXTITL];
};

int main(void)
{
	struct book library[MAXBKS];	/* �ṹ���� */
	int count = 0;
	int index, filecount;
	FILE * fp;
	int size = sizeof(struct book);	/* �õ��ṹ�����ʹ�С����Ϊ��д�ļ������Ĳ��� */

	if((fp = fopen("books.dat", "a+b")) == NULL)	//a+��׷���ı����ļ�ĩβ��ģʽ��b�Ƕ����ơ��ļ���λֱ�ӵ����ļ���ĩβ���ļ����������Զ������ļ� 
		fputs("���ļ�ʧ�ܣ�\n", stderr), exit(1);
	rewind(fp);	/* �ļ�λ��ָʾ���ƶ����ļ���ʼ�ֽ� 0�ֽڵ�λ�� */
//	fseek(fp, 0L, SEEK_SET);	//ͬ�����  469ҳ
	while(count < MAXBKS && fread(&library[count], size, 1, fp) == 1)	//fread()���سɹ���ȡ��������һ���ǲ���3����Ҫ�Ƕ��ļ���û�нṹ����� 
	{
		//0-9��ѭ�����Զ�����ģʽ���ļ� ���ļ����Ѷ������ݴ�ŵ���ַ��&library[count]�����ݴ�С��size��ֻ��һ�飬��fp�ļ�����ȡ����
		count++;	//���ڶ�ȡ��һ����ַ &library[count]
	}
	filecount = count;	//��¼�������ĸ���
	if(count == MAXBKS)	//���������10���ṹ��Ԫ��
		fputs("�ļ��鼮��10����������\n", stderr), exit(2);
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		//count��������ļ������м����飬�����С��10����ʾ�����Լ����Ӽ�¼(record)
		//�����Աtitle�����ڽ��ձ�׼���������ַ��������ַ�����Ԫ�ز�Ϊ���ַ�
		count++;
	}
	if(count > 0)
	{
		//�鼮��������0��˵���ļ����Ѿ��нṹ�������ˡ�
		for(index = 0; index < count; index++)	//�����ṹ������ÿ��Ԫ�صĳ�Ա����,ͬʱ�ѽṹ��д���ļ�
		{
			printf("%s\n", library[index].title);
			fwrite(&library[filecount], size, count - filecount, fp); //һ���԰����нṹ�������ļ�
		}
	}
	else
		puts("û���鼮��������");
	fclose(fp);
	return 0;
}
