#include <stdio.h>
struct type
{
	int a;
	int b;
};
void make(struct type object);	/* �β�������һ���ṹ�壬�ṹ�����������ں�������֮ǰ */
int main(void)
{
	struct type * p;
	struct type source =
	{
		.a = 999,
		.b = 888,	/* ��ʼ�����������Ͷ��ŷָ������һ����ʼ�����Ķ��ſ��п��� */
	};
	
	p = &source;	/* ָ��ṹ���ָ�룬�ṹ�����ǵ�ַ�����&����� */
	make(*p);
	printf("Source Address:%#X		p Address:%#X\n", &source, p);
	return 0;
}

void make(struct type object)
{
	printf("object.a = %d object.b = %d\n", object.a, object.b);
	printf("object Address:%#X\n", &object);
}
