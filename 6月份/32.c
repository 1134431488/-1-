#include <stdio.h>
#include <stdlib.h>
struct book
{
	int a;
	char * str;
};

int main(void)
{
	struct book t;

	t.str = (char *) malloc(sizeof("�����յ�"));		//sizeof�����ַ������ֽڳ��Ȱ����˿��ַ����� 
	t = (struct book) {.str = "�����յ�", .a = 100};	//����������ָ����ʼ����	
	printf("%s%dԪ���\n", t.str, t.a); 
	t = (struct book) {9999, "�����յ�"};	//�ڶ��ζԽṹ�帳ֵһ��������������˵���ṹ����Խ��ж�γ�ʼ�� 
	printf("%s%dԪ���\n", t.str, t.a); 
	return 0;
}
