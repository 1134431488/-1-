#include <stdio.h>

int main(void)
{
	FILE * input, * output;
	char bufr[512];

	input = fopen("a.txt", "r+");
	output = fopen("b.txt", "r+");
	if(setvbuf(input, bufr, _IOFBF, 512) != 0)	/* ʧ�� */
		printf("δ��Ϊ�����ļ����û�����\n");
	else
		printf("Ϊ�����ļ����û�����\n");

	if(setvbuf(output, NULL, _IOLBF, 132) != 0)	/* Ϊ��ָ������Ļ�����*/
		printf("δ��Ϊ����ļ����û�����\n");
	else
		printf("Ϊ����ļ����û�����\n");
	int ch;
	while((ch = getc(input)) != EOF)
		putc(ch, stdout);
	printf("\nbufr:%s\n", bufr);
	fclose(input);
	fclose(output);

	return 0;
}
