#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct b
{
	int a;
	char str[];
};
int main(void)
{
	struct b * p1, * p2;
	
	p1 = (struct b * ) malloc(sizeof(struct b) + 10 * sizeof(char));
	p2 = (struct b * ) malloc(sizeof(struct b) + 10 * sizeof(char));
	
	strcpy((*p1).str, "�ú�ѧϰ");	//*p1�ṹ��ĳ�Աstr��ֵ���ú�ѧϰ�� 
//	strcpy(p2->str, p1->str); 
	(*p2).str = (*p1).str;			//��*p1���ú�ѧϰ����ֵ���ṹ��*p2������һ��ָ����̣��鿴�Ƿ�ᷢ������
	//�����������֤���������������������һ��������������ָ�롣������ָ������������:�������� 
	
	printf("(*p1).str:%s 	(*p2).str:%s", (*p1).str, (*p2).str);
	
	return 0;
}
