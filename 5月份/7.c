#include <stdio.h>
#define MSG "I am a symbolic string constant." 
#define MAXLENGTH
int main(void)
{
	char words[MAXLENGTH] = "I am a string in an array.";	//���������е��ַ���
	const char * pt1 = "Something is pointing at me.";	//�ж�����ָ����
	puts("Here are some strings:");	//������һЩ�ַ���:
	puts(MSG);	//�ⲿ����
	puts(words);	//�������
	puts(pt1);	//ָ�����
	words[8] = 'p';	//�ı������ڵĵ�9��Ԫ��
	puts(words);	//���������� 
	 
	return 0;
}
/*��printf()����һ����puts()����Ҳ����stdio.hϵ�е�����/������������ǣ�
��printf()��ͬ���ǣ�puts()����ֻ��ʾ�ַ����������Զ�����ʾ���ַ���ĩβ
���ϻ��з���

����ʹ�����ַ���������char�������顢ָ��char��ָ�붨��ʽ�����ַ���3�ַ���
����Ӧȷ�����㹻�Ŀռ䴢���ַ���

�ַ������������ַ���������

��˫���������������ݳ�Ϊ�ַ�����������string literal��Ҳ�����ַ���������string constant����
˫�����е��ַ��ͱ������Զ�����ĩβ��\0�ַ�������Ϊ�ַ����������ڴ��У�����*/
