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

	t.str = (char *) malloc(sizeof("新年收到"));		//sizeof返回字符串的字节长度包含了空字符在内 
	t = (struct book) {.str = "新年收到", .a = 100};	//复合字面量指定初始化器	
	printf("%s%d元红包\n", t.str, t.a); 
	t = (struct book) {9999, "新年收到"};	//第二次对结构体赋值一个复合字面量，说明结构体可以进行多次初始化 
	printf("%s%d元红包\n", t.str, t.a); 
	return 0;
}
