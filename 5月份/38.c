#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	int n;
	if((fp = fopen("a.txt", "r")) == NULL)	//a.txt�ļ�����ֻ��"123"
		fputs("���ļ�ʧ�ܣ�", stderr), exit(EXIT_FAILURE);
//
//	while((ch = getc(fp)) != EOF)
//		putc(ch, stdout);
//	puts("");

//	while(n++ < 4)
//	{
//		if((ch = getc(fp)) != EOF)
//			putc(ch, stdout);
//	}

//	fseek(fp, 0L, SEEK_END);
//	long a = ftell(fp);
//	printf("\n�ļ����ڵ�λ��:%d\n", a);	//�����3
//	printf("����ֵ:%d = feof()\n", feof(fp)); 
	if(feof(fp) != 0)
		puts("�����ļ���β��");
	else
		puts("δ�ﵽ�ļ���β��");
	fclose(fp);
	return 0;
}
