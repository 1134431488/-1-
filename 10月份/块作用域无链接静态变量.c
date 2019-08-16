#include <stdio.h>
int a = 10; //和自动变量不同，外部变量只能使用常量表达式初始化文件作用域变量
void trystat(void);
int main(void)
{
	int count;
	auto int a = 11;
	printf("a = %d\n", a);
	
	{//块内中的a
		extern int a;//假设禁用此条语句，a = 11.块内因没有定义块内的a，会使用离他最近的a的声明，extern声明的a是外部变量
	
		printf("a = %d\n", a);
	}
	
	for(count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d:\n", count);
		trystat();
	}
	return 0;
}

void trystat(void)
{
	int fade = 1;
	static int stay = 1;
	printf("fade = %d and stay = %d\n", fade++, stay++);
}
