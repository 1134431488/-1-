#include <stdio.h>
#include <stdlib.h>/*�ṩ�⺯��srand()ԭ��*/
#include <time.h>/*�ṩtime()����ԭ��*/
#include "diceroll.h"/*���Ƚ������õı������Լ�һЩ����ԭ��*/
int main(void)
{
	int dice, roll;
	int sides;
	int status;
	srand((unsigned int) time(0));/*�������*/
	printf("����ÿ�����ӵ�������0ֹͣ��\n");
	while(scanf("%d", &sides) == 1 && sides > 0)
	{
		printf("How many dice?\n");
		if((status = scanf("%d", &dice)) != 1)
		{
			if(status == EOF)
				break;/*�˳�ѭ��*/
			else
			{
				printf("You should have entered an integer.");
				printf(" Let's begin again.\n");
				while(getchar() != '\n');
				continue;   /*����ѭ������һ�ֵ���*/
			}
		}
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n",
		       roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n");
	}
	printf("The rollem() function was called %d times.\n",
	       roll_count);    /*ʹ���ⲿ����*/
	printf("GOOD FORTUNE TO YOU!\n");

	return 0;
}
