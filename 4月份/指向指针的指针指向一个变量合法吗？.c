#include <stdio.h>
int main(void)
{
	//int a = 999;
	int a[1] = {7,1}; 
	int **p = &a;
	//printf("%d %d\n",*p ,a); 
	printf("%d %d\n",*p ,*a); 
	return 0;
 } 
 /*指向指针的指针指向单个元素是合法的*/
