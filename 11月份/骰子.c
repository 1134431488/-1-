#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int roll_count;
int roll_n_dice(int dice, int sides);
int roll_count = 0;

static int rollem(int sides)//第二次处理
{
	int roll;
	roll = rand() % sides + 1;//sides充当一个限制随机值的范围的作用，可以去百度余数定理，余数始终小于或等于除数
	++roll_count;   /*计算函数调用次数*/
	printf("roll = %d\n", roll);
	return roll;
}

int roll_n_dice(int dice, int sides)/*第一次处理*/
{
	int d;
	int total = 0;
	if(sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;  //返回，结束当前函数
	}
	if(dice < 1)
	{
		printf("Need at least 1 die.\n");
		return -1;  //返回，结束当前函数
	}

	for(d = 0; d < dice; d++)
		total += rollem(sides);
	printf("\n%d次roll之和(total)的值：%d\n", d, total);
 	return total;
}

int main(void)
{
	int dice, roll;
	int sides;
	int status;

	srand((unsigned int) time(0));/*随机种子*/
	printf("Enter the number of sides per die, 0 to stop.\n");
	while(scanf("%d", &sides) == 1 && sides > 0)/*获取一个值给sides，scanf会返回成功获取项数，且值是一个大于0的数*/
	{
		printf("How many dice?\n");
		if((status = scanf("%d", &dice)) != 1)//如果第二次获取的项数失败，则status不等于1
		{
			if(status == EOF)//判断一下是不是获取到文件结尾
				break;//退出while循环
			else
			{
				printf("You should have entered an integer.");
				printf(" Let's begin again.\n");
				while(getchar() != '\n')
					continue;   /*处理错误的输入*/
				printf("How many sides? Enter to stop.\n");
				continue;
			}
		}
		roll = roll_n_dice(dice, sides);//将成功获取到的值传递函数
		printf("You have rolled a %d using %d %d-sided dice.\n",
		       roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n");
	}
	printf("The rollem() function was called %d times.\n", roll_count); /*使用外部变量*/
	printf("GOOD FORTUNE TO YOU!\n");
	return 0;
}
