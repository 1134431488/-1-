#include <stdio.h>
/* 
	目的：复合字面量对结构体赋值地址变化猜测：1.结构体地址不变，数据变化。2.结构体地址发生变化，数据变化。 
	结论：符合第一种，由于本例实验结构体不是一个指针，而是一个结构体。而且与数组不同，数组不能对数组赋值
	然而结构体可以对结构体赋值，因而可以直接对一个结构体赋值"结构体复合字面量" 
	本实验例子是一个赋值过程，不是一个指向过程。 
 */
struct book {
	char str1[21];
	char str2[21];	
};

int main(void)
{
	struct book library;
	printf("本质地址:%#X\n", &library);		/* 结构体原来的地址 */
	library = (struct book) {"好好学习", "天天向上"};
	printf("%s %s\n", library.str1, library.str2);
	printf("实质地址:%#X\n", &library);		/* 结构体现在的地址 */
	
	struct book * p;
	int * r;
	r = (int []) {1, 2, 3, 4};	/* 指针指向一个int数组 */
	p = &(struct book)	{"学海无涯苦作舟", "书山有路勤为径\n"};	/* 指针指向一个struct book 结构体 */
	
	for(int n; n < 4; n++)
		printf("%d ", r[n]);
	printf("%s %s", (*p).str1, (*p).str2); 
	printf("实质地址:%#X\n", &p);		/* 结构体现在的地址 */
	
	printf("r%#X\n", (int []) {1,2,3,4});
	printf("r%#X\n", r);
	printf("p%#X\n", (struct book){"山穷水尽疑无路", "柳暗花明又一村"});
	printf("p%#X\n", p);
	return 0;
}
