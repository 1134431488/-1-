#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct test
{
	int a;
	char str[];
};
int main(void)
{
	struct test * p1, *p2;
	p1 = (struct test *) malloc(sizeof(struct test) + 5 * sizeof(char));
	p2 = (struct test *) malloc(sizeof(struct test) + 9 * sizeof(char));
	
//	*p1 = {999, "AABB"};					//����1
//	*p1 = (struct test) {999, "AABB"}; 		//����2 
	p1->a = 999;
	strcpy(p1->str, "aabb");		
	*p2 = *p1;				//C�����﷨���Ͽɵģ���ʹ���㹻�Ŀռ䣬Ҳ�����������������ݽ��п�����*p2�ṹ�� 
	printf("%s %d\n", p2->str, p2->a);
	return 0;
}
