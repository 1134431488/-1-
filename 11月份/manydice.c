#include <stdio.h>
#include <stdlib.h>/*提供库函数srand()原型*/
#include <time.h>/*提供time()函数原型*/
#include "diceroll.h"/*事先进行引用的变量。以及一些函数原型*/
int main(void)
{
	int dice, roll;
	int sides;
	int status;
	srand((unsigned int) time(0));/*随机种子*/
	printf("输入每个骰子的面数，0停止。\n");
	while(scanf("%d", &sides) == 1 && sides > 0)
	{
		printf("How many dice?\n");
		if((status = scanf("%d", &dice)) != 1)
		{
			if(status == EOF)
				break;/*退出循环*/
			else
			{
				printf("You should have entered an integer.");
				printf(" Let's begin again.\n");
				while(getchar() != '\n');
				continue;   /*进入循环的下一轮迭代*/
			}
		}
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n",
		       roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n");
	}
	printf("The rollem() function was called %d times.\n",
	       roll_count);    /*使用外部变量*/
	printf("GOOD FORTUNE TO YOU!\n");

	return 0;
}
