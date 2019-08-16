#include <stdio.h>
void trystat(void);
int main(void)
{
	int count;
	for(count = 1; count <= 3; count++)
	{
		printf("循环次数：%d:\n", count);
		trystat();
	}
	return 0;
}
void trystat(void)
{
	auto int fade = 1;//auto关键字声明为自动存储类别，动态存储类别
	static int stay = 1;//static关键字声明为内部链接，静态存储类别。
	printf("fade = %d and stay = %d\n", fade++, stay++);
}
