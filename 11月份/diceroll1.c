#include "diceroll.h"
/*��mandydice.cһ�����*/
#include <stdio.h>
#include <stdlib.h>/*�ṩrand()��ԭ��*/
int roll_count = 0; /*�ⲿ�����ļ�������̬�洢�ڱ���*/
static int rollem(int sides)    /*�ú������ڸ��ļ�˽��*/
{
	int roll;
    time_t a;
	roll = rand() % sides + 1;
	++roll_count;   /*���㺯�����ô���*/

	return roll;
}
int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;

	if(sides < 2)
	{
		printf("������Ҫ2��\n");
		return -2;
	}
	if(dice < 1)
	{
		printf("������Ҫ1��\n");
		return -1;
	}
	for(d = 0; d < dice; d++)
		total += rollem(sides);

	return total;
}
