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
	printf("*p�Ĵ�С : %d	struct book�Ĵ�С : %d\n", sizeof(*p), sizeof(struct book));	//�������ṹ���С 
	
	p = (struct book *) malloc(sizeof(struct book) + 10 * sizeof(char ));
	
	printf("*p�Ĵ�С : %d	struct book�Ĵ�С : %d\n", sizeof(*p), sizeof(struct book));	//�������ṹ���С 
	
	return 0;
}
