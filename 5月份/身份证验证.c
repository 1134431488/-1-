#include <stdio.h>
#include <string.h>
#define LIST 22 //�������Ԫ�ش�Żس��Ϳ��ַ� 
#define ROWS 6
int strcmpkk(const char *text1, const char *text2);
int main(void)
{
	FILE *fp1;
	int n, m, b;
	char array1[ROWS][LIST];//�洢���±���ȡ�����ַ����Ķ�ά����

	fp1 = fopen("001.txt", "a+");//�򿪿ɶ�д�ļ�
	for(n = 0; n < ROWS && fgets(array1[n], LIST, fp1) != NULL; n++)//�����ȡ�ַ�����ÿһ��
	{
		printf("%s", array1[n]);
	}

	for(m = 0; m < ROWS; m++)//ȥ���ظ�
		for(n = m + 1; n < ROWS; n++)
			if(strcmpkk(array1[m], array1[n]) == 0)
				for(b = 0; b < LIST; b++)//��array1[n]���е���ֵȫ����ֵΪ���ַ�
					array1[n][b] = '\0';

	printf("\n\n");//�ڶ�����
	fclose(fp1);/*�ر��ļ�*/

	fp1 = fopen("001.txt", "a+");//�򿪿ɶ�д�ļ�
	fputs("\nȥ�صĺ�������ظ����룺\n", fp1);//���±�����һ�����з�, ���ȥ�غͲ��ظ�������
	for(n = 0; n < ROWS; n++)//��֤�������Ļ�븽�ӵ�ԭ�ȵļ��±���
	{
		printf("%s", array1[n]);//��ʾȥ�ظ�������
		fputs(array1[n], fp1);//������ӵ�ԭ�ȼ��±���ĩβ
	}
	fclose(fp1);/*�ر��ļ�*/
	return 0;
}

int strcmpkk(const char *text1, const char *text2)//�����ַ������бȽϵĺ�������ͬ�򷵻� 0
{
	int n;
	if(strlen(text1) == strlen(text2))//��Ч�ַ�Ԫ�س���һ��
	{
		while(*text1 == *text2 && *text1 != '\0')//���ַ����жԱ�һ��,��⵽���ַ��˳�
		{
			text1++;//��ʼ�����ַ��� 1
			text2++;//��ʼ�����ַ��� 2
		}
		if(*text1 == *text2)    //��ȷ�����
			return 0;
		else if(*text1 < *text2)//��ֵС����ֵ���ظ��� -1
			return -1;
		else					//��ֵ������ֵ�������� 1
			return 1;
	}
	else
		return -2;//�ַ����Ȳ����ֱ�ӷ���-2
}
