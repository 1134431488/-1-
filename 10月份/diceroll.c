#include "diceroll.h"   /*��mandydice.cһ�����*/
#include <stdio.h>
#include <stdlib.h> /*�ṩ�⺯��rand()��ԭ��*/

int roll_count = 0; /*�ⲿ���� �ļ������� ��̬����*/
static int rollem(int sides)    /*�������ڸ��ļ�˽�� �ڲ����� ����*/
{
	int roll;
	
	roll = rand() % sides + 1;
	++roll_count;   /*���㺯�����ô���*/
	
	return roll;
}

int roll_n_dice(int dice, int sides)
{
	int d;
}
