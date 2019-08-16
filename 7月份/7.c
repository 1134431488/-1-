#include <stdio.h>
enum DAY {mon = 1, tue, wed, thu, frim, sat, sun} day; //逗号分隔的枚举类型
int main(void)
{
	//遍历枚举元素
	for(day = mon; day <= sun; day++)
	{
		printf("枚举元素：%d\n", day);
	}
	return 0;
}
