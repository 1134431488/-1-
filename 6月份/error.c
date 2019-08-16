#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct b
{
	int a;
	char str[];
};
int main(void)
{
	struct b * p1, * p2;
	
	p1 = (struct b * ) malloc(sizeof(struct b) + 10 * sizeof(char));
	p2 = (struct b * ) malloc(sizeof(struct b) + 10 * sizeof(char));
	
	strcpy((*p1).str, "好好学习");	//*p1结构体的成员str赋值“好好学习” 
//	strcpy(p2->str, p1->str); 
	(*p2).str = (*p1).str;			//把*p1“好好学习”赋值给结构体*p2，这是一种指向过程，查看是否会发生错误
	//如果发生错误，证明伸缩型数组的数组名是一个常量名而不是指针。不可以指向它处。结论:发生错误 
	
	printf("(*p1).str:%s 	(*p2).str:%s", (*p1).str, (*p2).str);
	
	return 0;
}
