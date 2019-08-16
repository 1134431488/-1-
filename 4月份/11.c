#include <stdio.h>
struct type_2 {
	char str1[20];
	char str2[20];
};

struct type_1 {
	int a;	/*structure declaration 以分号分隔memory*/
	int b;
	int c;
	struct type_2 number;	/*因为是声明，struct内的每一个memoru declaretion都不能省略分号*/
};	/*定义式声明后面不得省略分号*/

int main(void) {
	struct type_1 * him;	/*一个指向结构的指针*/
	struct type_1 barney = {	/*barney == 巴尼*/
		.a = 99,	/*memory init 以逗号分隔*/
		.b = 88,
		.c = 77, 
		.number = {"好好学习！", "天天向上!"}	/*因为是初始化，类似数组。最后的一个初始化后面可以省略逗号*/
	};	/*初始化（init）后面不可以省略分号*/

	him = &barney; 

	printf("a = %d    b = %d    c = %d\n", him->a, him->b, him->c);
	printf("%s %s\n", him->number.str1, him->number.str2); 
	return 0;
}
