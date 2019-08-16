#include "diceroll.h"   /*与mandydice.c一起编译*/
#include <stdio.h>
#include <stdlib.h> /*提供库函数rand()的原型*/

int roll_count = 0; /*外部链接 文件作用域 静态函数*/
static int rollem(int sides)    /*函数属于该文件私有 内部链接 函数*/
{
	int roll;
	
	roll = rand() % sides + 1;
	++roll_count;   /*计算函数调用次数*/
	
	return roll;
}

int roll_n_dice(int dice, int sides)
{
	int d;
}
