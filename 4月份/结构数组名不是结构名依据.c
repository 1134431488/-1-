#include <stdio.h>
/*
目的:一个结构变量的标识符不是一个地址，而数组的数组名是一个地址
然后如果把结构声明为数组，它的标识符就是一个数组名而不是结构名
因而直接使用结构的数组名是否等价使用第一个结构元素，代码如下:
 */
struct book
{
	int value;
	int index;	/* 声明不是初始化，最后一个Memory Declaration必须有分号 */
};

int main(void)
{
	struct book library[2] =
	{
		{
			.value = 999,
			.index = 888	/* 888后面可以加逗号也可以不加 */
		},
		{
			.value = 777,
			.index = 666
		}
	};
//	printf("library.value = %d library.index = %d\n", library.value, library.index);	/* 被识别错误 */
	for(int n = 0; n < 4; n++)	/*故意设置0 - 3下标范围，猜测数组元素地址有连续性*/
		printf("%-10d    library[0] + %d %#X\n", *(library + n), n, library + n);	/* 结构（result）结构数组元素地址不是连续的，发现断层 */
	putc('\n', stdout);
	for(int n = 0; n < 2; n++)	/* 奇怪的问题，与第一个循环发生区别 */
		printf("%-10d    library[1] + %d %#X\n", *(&library[1] + n), n, &library[1] + n);
	printf("\n%#X %#X\n\n", &library[1], library[1].index);
	for(int n = 0; n < 2; n++)
	{
		printf("library[%d].value = %d\n", n, library[n].value);
		printf("library[%d].index = %d\n", n, library[n].index);
	}
	
	puts("下面输出一下所有结构所有成员Address");
	for(int n = 0; n < 2; n++)
	{
		printf("index:%#X\nvalue:%#X\n", library[n].value, library[n].index);
	}
	return 0;
}

