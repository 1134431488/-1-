#include <stdio.h>
struct type_2 {
	char str1[20];
	char str2[20];
};

struct type_1 {
	int a;	/*structure declaration �Էֺŷָ�memory*/
	int b;
	int c;
	struct type_2 number;	/*��Ϊ��������struct�ڵ�ÿһ��memoru declaretion������ʡ�Էֺ�*/
};	/*����ʽ�������治��ʡ�Էֺ�*/

int main(void) {
	struct type_1 * him;	/*һ��ָ��ṹ��ָ��*/
	struct type_1 barney = {	/*barney == ����*/
		.a = 99,	/*memory init �Զ��ŷָ�*/
		.b = 88,
		.c = 77, 
		.number = {"�ú�ѧϰ��", "��������!"}	/*��Ϊ�ǳ�ʼ�����������顣����һ����ʼ���������ʡ�Զ���*/
	};	/*��ʼ����init�����治����ʡ�Էֺ�*/

	him = &barney; 

	printf("a = %d    b = %d    c = %d\n", him->a, him->b, him->c);
	printf("%s %s\n", him->number.str1, him->number.str2); 
	return 0;
}
