#include <stdio.h>
#include <stdlib.h> 
struct book
{
	char str;
	int str2[];
};
int main(void)
{
	struct book * p, * p1;
	printf("*p的大小 : %d	struct book的大小 : %d\n", sizeof(*p), sizeof(struct book));	//输出这个结构体大小 
	
	p = (struct book *) malloc(sizeof(struct book) + 10 * sizeof(char ));
	
	printf("*p的大小 : %d	struct book的大小 : %d\n", sizeof(*p), sizeof(struct book));	//输出这个结构体大小 
	
	return 0;
}
