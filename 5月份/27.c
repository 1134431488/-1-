#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);	// Сд��ĸת��Ϊ��д�ַ�
int PunctCount(const char *);	//�����ż���

int main(void)
{
	char line[LIMIT];	//�ַ���
	char * find;		//ָ���ַ���ָ��

	puts("Please enter a line:");
	fgets(line, LIMIT, stdin);	//����������ȡ�����line����ȡ������Ҫ����1�д���ռ�
	find = strchr(line, '\n');	//���һ��з�����������λ��
	if(find)	//���find ������NULL
		*find = '\0';	//�޸Ļ��з�Ϊ���ַ�
	ToUpper(line);		//����������
	puts(line);			//����޸ĺ����ַ���
	printf("That line has %d punctuation characters.\n", PunctCount(line));	//����������

	return 0;
}

void ToUpper(char * str)
{
	while(*str)					//�������һ�����ַ�
	{
		*str = toupper(*str);	//���ش�д
		str++;
	}
}

int PunctCount(const char * str)
{
	int ct = 0;
	while(*str)		//�������һ�����ַ�
	{
		if(ispunct(*str))	//����Ǳ����ŷ�����
			ct++;	//�����ż��� 
		str++;		//������ַ 
	}
	return ct;
}
