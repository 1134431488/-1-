#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	fp = fopen("�ı�.txt", "r+");//���ȴ�һ�������ڵ��ļ�
	if(getc(fp) == EOF)//��ȡ�������ܶ�ȡ��EOF
	{
		printf("��ȡ�����ڵ��ļ�����һ���ַ�����EOF\n");
	}
	if(getc(NULL) == EOF)
	{
		printf("getcֱ�Ӷ�ȡNULL��Ȼ������EOF!\n");
		//ϸ�ڴ���
		fclose(fp);
		exit(EXIT_FAILURE);
	}
	printf("δ��ȡ��EOF\n");

	fclose(fp);
	return 0;
}
