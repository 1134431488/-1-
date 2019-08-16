#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31
void fund(int p[], int n); 
/* 什么是复合字面量，以数组为例子: 复合字面量由 类型 加上 一对花括号括起来的初始化列表组成。不必写标识符
   数组复合字面量：(int [4]) {20,20,20,20} 
   初始化有数组名的数组可以省略方括号内数组的大小，复合字面量也可以这样做。 
   编译器会自动计算数组的大小，我们必须声明相同类型的指针指向这个复合字面量即可:
   int * p;		// 由于数组名为只读，不允许指向其他地址，只能使用指针。若是函数形参，可以声明为p[] ,但它仍然等价指针，它是8字节的形参 
   p = (int [])	 {10,10,10};	//仔细看会发现 (int []) 被一对圆括号括起来，后面跟着一个初始化礼包。它是匿名的，必须创建同时使用它 
   以上就是数组的复合字面量，"复合" 释义 是指 物体等 因某种原因而结合起来 
   结构体复合字面量: (struct 标记) {10, "ABC", 0.888} 
   和数组复合字面量的区别是圆括号内类型和数组是不一样的，共同点初始化列表都是由一对花括号括起来，以逗号分隔。且都是匿名的，必须创建
   同时使用它, 它可以直接对结构体赋值:
   struct book library;		//假设这个结构体成员由1个int，1个char数组，1个float 
   library = (struct book)  {999, "ABCD", 9.88888}; 
 */
struct book
{
	char title [MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book readfirst;	/* read first 读第一个 */
	int score;	 /* 成绩 */
	printf("Enter test score:"); 	/* 输入测试成绩 */
	scanf("%d", &score);
	if(score >= 84)
		readfirst = (struct book)	{"Crime and Punshment","Fyodor Dostoyevsky",11.25};	/* 复合字面量是匿名的，必须在创建的同时使用 */
	else
		readfirst = (struct book)	{"Mr. Bouncy's Nice Hat", "Fred Winsome", 5.99};
		
	printf("Your assigned reading:\n");
	printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);
	/* 测试数组的复合字面量 */
	int *p; 
	p = (int [4])	{1, 2, 3, 4};
	for(int n; n < 4; n++)
	printf("p[%d] = %d\n", n, p[n]); 
	/* 把数组的复合字面量传入函数看看情况 */
	fund((int []) {1,2,3,4}, 4);
	
	return 0;	 
}

void fund(int p[], int n)
{
	for(int i = 0; i < n; i++)
		printf("p[%d] = %d\n", i, p[i]);
		
	p = (int []) {6, 7, 8, 9};
	for(int i = 0; i < n; i++)
		printf("p[%d] = %d\n", i, p[i]);
	if(sizeof(p) == 8)	
		printf("函数形参的p不是一个常规数组而是一个%d字节的指针。", sizeof(p));
	else
		puts("函数形参的p是一个常规的数组，意外的是的数组名可以指向别的地址");
}
