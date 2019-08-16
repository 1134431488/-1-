#include <stdio.h>
#define LEN 20

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {				/* 结构成员定义式声明以分号分隔，且右花括号以分号结束 */
	struct names handle;	/* 嵌套结构 */
	char favfood[LEN];		/* 喜欢的食物 */
	char job[LEN];			/* 工作 */
	float income;			/* 收入 */
};

int main(void) {
	struct guy fellow[2] = {	/* 声明两个guy结构(类型)的数组 */
		{
			{"Ewen", "Villard"},	/* 结构成员初始化以逗号分隔 */
			"grilled salmon",
			"personality coach",
			 68112.00
		},
		{
			{"Rodney", "Swillbelly"},
			"tripe",
			"tabloid editor",
			432400.00
		}
	};	/* 结构成员初始化以逗号分隔，且右花括号以分号结束 */
	struct guy * him;	/* 这是一个指向结构的一维指针 */
	
	printf("address #1: %#X    #2: %#X\n", &fellow[0], &fellow[1]);	/* 输出两个结构元素的首地址 */ 
	him = &fellow[0];	/* 告诉编译器该指针指向何处	*/ 
	printf("pointer #1: %#X    #2: %#X\n", him, him + 1);	/* 输出这个一维结构指针address以及偏移 + 1位置后的地址 */ 
	printf("him->income is $%.f:(*him).income is $%.2f\n", him->income, (*him).income);	/* 两种结构指针引用成员的方式 */
	him++;	/*指向下一个结构体元素的首地址*/
	printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);	/* 输出结构指针指向的结构成员与嵌套结构的结构成员的方式 */
	
	return 0;
}
