#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
//	/*ʹ��getchar��putchar�����б�׼����������*/
//	int ch;
//	while((ch = getchar()) != '\n')
//	{
//		putchar(ch);
//	}
//	putchar('\n');  //putchar�Ĳ������ַ����������ַ���

//	/*����fgetc��fputc�����б�׼�������*/
//	int ch2;
//	while((ch2 = fgetc(stdin)) != '\n')
//	{
//		fputc(ch2, stdout); //����1�ַ�������2ָ��
//	}
//	fputc('\n', stdout);

	FILE *fp;
	//�򿪻򴴽�һ���ļ���д�ļ�
	fp = fopen("new.txt", "w+");
	if(fp != NULL)
	{
		int ch2;//���ڱ���
		while((ch2 = fgetc(stdin)) != '\n')
		{
			fputc(ch2, fp);//����1�ַ���������������������ļ�
		}
		fputc('\n', fp);
	}
	else
	{
		printf("open file failed!\n");
	}
	int file_close_result = fclose(fp);
	if(file_close_result == 0)
	{
		printf("colse success\n");
	}
	else
		printf("colse failure\n");
	return 0;
}
