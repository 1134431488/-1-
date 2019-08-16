#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int roll_count;
int roll_n_dice(int dice, int sides);
int roll_count = 0;

static int rollem(int sides)//�ڶ��δ���
{
	int roll;
	roll = rand() % sides + 1;//sides�䵱һ���������ֵ�ķ�Χ�����ã�����ȥ�ٶ�������������ʼ��С�ڻ���ڳ���
	++roll_count;   /*���㺯�����ô���*/
	printf("roll = %d\n", roll);
	return roll;
}

int roll_n_dice(int dice, int sides)/*��һ�δ���*/
{
	int d;
	int total = 0;
	if(sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;  //���أ�������ǰ����
	}
	if(dice < 1)
	{
		printf("Need at least 1 die.\n");
		return -1;  //���أ�������ǰ����
	}

	for(d = 0; d < dice; d++)
		total += rollem(sides);
	printf("\n%d��roll֮��(total)��ֵ��%d\n", d, total);
 	return total;
}

int main(void)
{
	int dice, roll;
	int sides;
	int status;

	srand((unsigned int) time(0));/*�������*/
	printf("Enter the number of sides per die, 0 to stop.\n");
	while(scanf("%d", &sides) == 1 && sides > 0)/*��ȡһ��ֵ��sides��scanf�᷵�سɹ���ȡ��������ֵ��һ������0����*/
	{
		printf("How many dice?\n");
		if((status = scanf("%d", &dice)) != 1)//����ڶ��λ�ȡ������ʧ�ܣ���status������1
		{
			if(status == EOF)//�ж�һ���ǲ��ǻ�ȡ���ļ���β
				break;//�˳�whileѭ��
			else
			{
				printf("You should have entered an integer.");
				printf(" Let's begin again.\n");
				while(getchar() != '\n')
					continue;   /*������������*/
				printf("How many sides? Enter to stop.\n");
				continue;
			}
		}
		roll = roll_n_dice(dice, sides);//���ɹ���ȡ����ֵ���ݺ���
		printf("You have rolled a %d using %d %d-sided dice.\n",
		       roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n");
	}
	printf("The rollem() function was called %d times.\n", roll_count); /*ʹ���ⲿ����*/
	printf("GOOD FORTUNE TO YOU!\n");
	return 0;
}
