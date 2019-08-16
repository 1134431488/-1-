#include <stdio.h>
struct type
{
	int a;
	int b;
};
void make(struct type object);	/* 形参声明是一个结构体，结构体声明必须在函数声明之前 */
int main(void)
{
	struct type * p;
	struct type source =
	{
		.a = 999,
		.b = 888,	/* 初始化和数组类型逗号分隔，最后一个初始化项后的逗号可有可无 */
	};
	
	p = &source;	/* 指向结构体的指针，结构名不是地址必须加&运算符 */
	make(*p);
	printf("Source Address:%#X		p Address:%#X\n", &source, p);
	return 0;
}

void make(struct type object)
{
	printf("object.a = %d object.b = %d\n", object.a, object.b);
	printf("object Address:%#X\n", &object);
}
