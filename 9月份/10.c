#include <stdio.h>
int units = 0;//外部变量只能以常量初始化赋值

void critic(void);
int main(void)
{
	extern int units;//引用声明不可以对其赋值

	/*存储类别说明符号extern告诉编译器此引用
	表示此函数中的任何使用units的地方都引用
	同一个定义在函数外部的变量
	因此不能在此函数中重复定义units，
	但是可以在函数的某一个块中定义自动类别的units*/
	scanf("%d", &units);
	while(units != 56)
		critic();
	printf("结束！");

	{
		auto int units = 10;//显示定义个自动存储类别的units
		printf("%d", units);
	}

}
void critic(void)
{
	printf("不对！请再次输入:\n");
	scanf("%d", &units);
}
