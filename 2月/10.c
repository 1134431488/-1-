#include <stdio.h>
#include <stdlib.h>
#define name "����.txt"

int main(void)
{
	FILE *fp = fopen(name, "w+");
	char c1;
	char c2[] = "abcdefghiz";

	fprintf(fp, "0123456789");
	rewind(fp);

	long n = 0;
	long last;

//	while((c1 = getc(fp)) != EOF && n < sizeof(c2)) //�����(stdout)����ȡ�ַ�
//	{
//		printf("position = %d\n", last = ftell(fp) - 1); //�鿴����λ��
//		ungetc(c2[n], fp); //���ַ��Ż�����(��)�У���������������ֱ��Ӧ���ԵĻ�����
//		n++;
//		fseek(fp, n, SEEK_SET);
//	}

//	fseek(fp, 0L, SEEK_SET); //����λ��
//	printf("position = %d\n", last = ftell(fp));//���λ��
//	c1 = getc(fp);//�õ��ַ�
//	printf("c1= %c\n", c1);//����ַ�
//	ungetc('a', fp);        //�Ż��ַ�--------------------�ظ�����Ĳ�����
//	fseek(fp, 1L, SEEK_SET); //����λ��
//	printf("position = %d\n", last = ftell(fp));//���λ��
//	c1 = getc(fp);//�õ��ַ�
//	printf("c1= %c\n", c1);//����ַ�
//	ungetc('b', fp);//�Ż��ַ�
//	fseek(fp, 3L, SEEK_SET); //����λ��

//	fpos_t pos = (fpos_t)0;
//	fsetpos(fp, &pos);
//	rewind(fp);//���������ļ������ǻ�������ò����ˣ�
	while((c1 = getc(fp)) != EOF)
		putc(c1, stdout);

	printf("\nreturn result %d\n", ungetc('3', fp));
	while(ungetc('k', fp) != EOF)
		continue;
		
	while((c1 = getc(fp)) != EOF)
		putc(c1, stdout);
	fclose(fp);
//	remove(name);
}
