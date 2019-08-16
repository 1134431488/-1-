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
	
//	*p1 = {999, "AABB"};					//错误1
//	*p1 = (struct test) {999, "AABB"}; 		//错误2 
	p1->a = 999;
	strcpy(p1->str, "aabb");		
	*p2 = *p1;				//C语言语法不认可的，即使有足够的空间，也不对伸缩型数组内容进行拷贝到*p2结构中 
	printf("%s %d\n", p2->str, p2->a);
	return 0;
}
