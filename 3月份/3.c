#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'   /*DOS�ı��ļ��е��ļ���β���*/
#define SLEN 81 //����
int main(void)
{
	char file[SLEN];
	char ch;
	FILE *fp;
	long offset, last;
	puts("����һ���ļ�����,�������׺������ļ��������Դ����Ŀ¼");
	scanf("%80s", file);
	if((fp = fopen(file, "rb")) == NULL)
	{
		printf("�ļ��Զ�����ֻ����ʧ��\n��ȷ�ϵ�ǰĿ¼��û������ļ�%s\n", file);
		exit(EXIT_FAILURE);
	}
	fseek(fp, 0L, SEEK_END);/*��λ���ļ�ĩβ*/
	last = ftell(fp);       /*�����ļ�λ��ָʾ���ĵ�ǰλ��*/
    for(offset = 1L; offset <= last; offset++)
    {
    	fseek(fp, -offset, SEEK_END);   /*�����������*/
    	ch = getc(fp);
    	if(ch != CNTL_Z && ch != '\r')  /*MS-DOS�ļ�*/
    	    putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	
	return 0;
}

/*
fseek(fp, 0L, SEEK_SET);    //��λ�ļ���ʼ
fseek(fp, 10L, SEEK_SET);   //��λ�ļ���ʼ����ƫ��10�ֽ�
fseek(fp, -10L, SEEK_SET);  //��λ�ļ���ʼ����ƫ��10�ֽ�
fseek(fp, 2L, SEEK_CUR);    //��λ�ļ���ǰλ������ƫ��2�ֽ�
fseek(fp, -2L, SEEK_CUR);   //��λ�ļ���ǰλ������ƫ��2�ֽ�
fseek(fp, 0L, SEEK_END);    //��λ�ļ�ĩβ
fseek(fp, -10L, SEEK_END);  //��λ�ļ�ĩβ����ƫ��10�ֽ�
*/
