#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE * fp;
	int ch;
	long fstart, current;
	if((fp = fopen("temp.txt", "r")) == NULL)
		fprintf(stderr, "%s\n", "��temp�ļ�ʧ�ܣ�"), exit(EXIT_FAILURE);
	
	fstart = ftell(fp);
	printf("�ļ��ĵ�һ���ֽڵ�λ��:%ld\n", fstart);	//���file start
	printf("�ļ�%ldλ�õ��ַ���%c\n", fstart, fgetc(fp)); 
	current = ftell(fp);
	printf("��ȡ��һ���ַ��ˣ��ļ���λ�÷����˸ı䣬���ڵ�λ����:%ld\n", current);
	fseek(fp, 0L, SEEK_END);
	current = ftell(fp);
	ch = fgetc(fp);
	printf("�����ƶ����ļ�ĩβ%ld��λ�ã���ȡ�����ַ���%c\n", current, ch);
	current = ftell(fp);
	printf("ĩβһ���ǿ��ַ��������㿴������������ɶ�����ǻ���һ�¡�\n���������ڶ���λ�ô����������ʲô��\n");
	current = fseek(fp, -1L, SEEK_END);
	ch = getc(fp);
	printf("�����ڶ��ַ�λ��%ld,��ȡ�����ַ���%c\n", current, ch); 
	for(long n = 1; n < 86; n++)
	{
		fseek(fp, -n, SEEK_END);
		printf("%d\n", ftell(fp));
		ch = fgetc(fp);
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}
