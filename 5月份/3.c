#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char ch;
	FILE * fp;	//FILE�ṹ���͵�ָ��fp
	if((fp = fopen("temp.txt", "a+")) == NULL)
	{
		puts("cant open");
		exit(EXIT_FAILURE);
	}
	int count;
	long last;
	fseek(fp, 0L, SEEK_END);	//��λ���ļ���β
	last = ftell(fp);	//��ȡ�ļ�ĩβ��λ�ã��൱���ļ��ֽ���
	char str[10] = {[0] = '\0'};
	printf("last = %ld\n", last);
	if(last == 0L)
	{
		puts("����1-10����ĸ������������");
		fgets(str, 10, stdin);
		*(strchr(str, '\n')) = '\0';	//�������忴��һ����ַ���ã�ȡֵ�Ŀ��ַ�
		while(getchar() != '\n')
			continue;
	}
	fputs(str, fp);
	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);
	if(str[0] != '\0')
		printf("str = %s  last = %ld\n", str, last);
	else
		printf("last = %ld\n", last);
	for(count = 1; count <= last; count++)	// last�����һλ�ַ�����Ϊ�ļ��ڵ��ַ������ַ�����ͬ�����һλ�ַ����ܲ��ǿ��ַ���
	{
		//���һλ�ַ�λ�ü�ȥ1������Ч���ַ����֡�
		fseek(fp, -count, SEEK_END);	// ��λ���ļ���β
		ch = getc(fp);
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}
