#include <stdio.h>
#include <windows.h>
int main(void)
{
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_OK));//ȷ�� 
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_OKCANCEL));//ȷ�� ȡ�� 
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_ABORTRETRYIGNORE));//��ֹ ���� ���� 
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_YESNOCANCEL));//�� �� ȡ�� 
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_YESNO));//�� �� 
	
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_RETRYCANCEL));//���� ȡ�� 
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_CANCELTRYCONTINUE));//ȡ�� ���� ���� 
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_ICONHAND));//����ͼ�� ȷ�� 
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_ICONQUESTION));//ѯ��ͼ�� ȷ�� 
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_ICONEXCLAMATION));//��̾�� ȷ�� 
	
	printf("��������ֵ:%d\n", MessageBox(0,"����","���ڱ���",MB_ICONASTERISK));//��̾�� ȷ�� 

		
	return 0;
 } 
