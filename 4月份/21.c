#include <stdio.h>
/* 
	Ŀ�ģ������������Խṹ�帳ֵ��ַ�仯�²⣺1.�ṹ���ַ���䣬���ݱ仯��2.�ṹ���ַ�����仯�����ݱ仯�� 
	���ۣ����ϵ�һ�֣����ڱ���ʵ��ṹ�岻��һ��ָ�룬����һ���ṹ�塣���������鲻ͬ�����鲻�ܶ����鸳ֵ
	Ȼ���ṹ����ԶԽṹ�帳ֵ���������ֱ�Ӷ�һ���ṹ�帳ֵ"�ṹ�帴��������" 
	��ʵ��������һ����ֵ���̣�����һ��ָ����̡� 
 */
struct book {
	char str1[21];
	char str2[21];	
};

int main(void)
{
	struct book library;
	printf("���ʵ�ַ:%#X\n", &library);		/* �ṹ��ԭ���ĵ�ַ */
	library = (struct book) {"�ú�ѧϰ", "��������"};
	printf("%s %s\n", library.str1, library.str2);
	printf("ʵ�ʵ�ַ:%#X\n", &library);		/* �ṹ�����ڵĵ�ַ */
	
	struct book * p;
	int * r;
	r = (int []) {1, 2, 3, 4};	/* ָ��ָ��һ��int���� */
	p = &(struct book)	{"ѧ�����Ŀ�����", "��ɽ��·��Ϊ��\n"};	/* ָ��ָ��һ��struct book �ṹ�� */
	
	for(int n; n < 4; n++)
		printf("%d ", r[n]);
	printf("%s %s", (*p).str1, (*p).str2); 
	printf("ʵ�ʵ�ַ:%#X\n", &p);		/* �ṹ�����ڵĵ�ַ */
	
	printf("r%#X\n", (int []) {1,2,3,4});
	printf("r%#X\n", r);
	printf("p%#X\n", (struct book){"ɽ��ˮ������·", "����������һ��"});
	printf("p%#X\n", p);
	return 0;
}
