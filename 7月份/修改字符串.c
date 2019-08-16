#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
	char line[LIMIT];//81 
	char * find;

	puts("Please enter a line:");
	fgets(line, LIMIT, stdin);//��ȡ�ַ�����line���� 
	
	find = strchr(line, '\n');//��line�л�ȡ'\n'����Ϊ���ַ� 
	if(find != NULL)
		*find = '\0';
		
	ToUpper(line);//���ش�д 
	puts(line);//��������д
	printf("That line has %d punctuation characters.\n", PunctCount(line));

	return 0;
}
void ToUpper(char * str)//strָ��ָ������ 
{
	while(*str)//ȡ����Ԫ�� 
	{
		*str = toupper(*str);//�����Сд�ַ��ͷ��ش�д 
		str++;//������ַ 
	}
}
int PunctCount(const char *str)
{
	int ct = 0;
	while(*str)
	{
		if(ispunct(*str))//����Ǳ������ַ���Ϊ��
			ct++;//��ʼ��¼����������
		str++;//�������ַ
	}
	return 0;
}
