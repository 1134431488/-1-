#include <stdio.h>
int main(void)
{
	int a, max, i;
	a = max = i = 0;//��ʼ��Ϊ0
	printf("��ʼ��������:\n");
	do
	{
		if(a < max && a != -1)//aС��max
			max = a;//��ô�͵õ���Сֵ
	}
	while(scanf("%d", &a), a != -1);
	printf("��Сֵ��%d", max);
	
	return 0;
}
