#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
    if((fp = fopen("�ı�.txt", "r+") ) == NULL)
    {
    	printf("���ı�ģʽ�򿪣�r+�ɶ�д������ģʽ�������ļ�����������ʾ����䣡\n");
    	printf("֤����r+ģʽ���򿪵��ļ����������ȴ����õ��ļ���");
		exit(EXIT_FAILURE);
	}
	printf("��r+ģʽ�½���һ���ı��ļ�\n");
	
	fclose(fp);
	return 0;
}
