#include <stdio.h>
struct temp {
	int t;
	int a[];	//伸缩型数组成员结构必须要有2个成员，最后一个成员必须是
				//伸缩型数组。这个数组方括号没有内容。 
				//延迟初始化这个伸缩型数组有一个特点，就是这个数组的地址发生了二次变化
				//众所周知，数组名是一个常量，声明了就无法改变其指向的地址
				//但在这个结构声明为一个指针时，开始发生变化了。 
};
int main(void)
{
//	int a[];	//一种错误的声明方式，不能省略方括号元素个数时不进行初始化 
	struct temp * test;
	printf("伸缩型数组成员a的地址现在是:%#X\n", *test.a)
	test = malloc(sizeof(temp) + sizeof(int * 3));
	
	return 0;
}
