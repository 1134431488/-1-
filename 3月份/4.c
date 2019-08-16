#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;
	char ch;
	if((fp = fopen("temp.txt", "w+")) == NULL)
		puts("exit"),exit(EXIT_FAILURE);


	for(int n = 49; n < 49+9; n++)
		fputc(n, fp);

	fpos_t pos;
	fgetpos(fp, &pos);
	printf("file position = %lld\n", pos);
	pos = 0;	//�����ļ���λ���͵�ֵΪ�ļ���ʼ��
	fsetpos(fp, &pos);
	while(EOF != (ch = fgetc(fp)))
		fputc(ch, stdout);
	if(fclose(fp) != 0)
		puts("close error");
	remove("temp.txt");

	return 0;
}
