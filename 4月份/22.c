#include <stdio.h>
/* 复合字面量可以使用指定初始化器，复合字面量在函数的外部具有静态存储期，复合字面量在函数的内部具有块自动存储器 */
/* 验证上述概念 */

struct book
{
	int a;
	int b;
	int c;
};



int main(void)
{
	struct book lib1;
	lib1 = (struct book)    {.a = 6, .b = 8, .c = 10};
	printf("a:%d b:%d c:%d", lib1.a, lib1.b, lib1.c);

	return 0;
}
