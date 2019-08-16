#include "diceroll.h"
/*与mandydice.c一起编译*/
#include <stdio.h>
#include <stdlib.h>/*提供rand()的原型*/
int roll_count = 0; /*外部链接文件作用域静态存储期变量*/
static int rollem(int sides)    /*该函数属于该文件私有*/
{
	int roll;
    time_t a;
	roll = rand() % sides + 1;
	++roll_count;   /*计算函数调用次数*/

	return roll;
}
int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;

	if(sides < 2)
	{
		printf("至少需要2面\n");
		return -2;
	}
	if(dice < 1)
	{
		printf("至少需要1面\n");
		return -1;
	}
	for(d = 0; d < dice; d++)
		total += rollem(sides);

	return total;
}
