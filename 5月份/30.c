#include <stdio.h>
int units = 0;	//�ⲿ����
int a[20] = {[0] = 8,7,6,5,4,3,2,1};
void critic(void);
int main(void)
{
	extern int unitx;	//��ѡ���ظ�����
	extern int unitx;
	scanf("%d", &units);
	while(units != 56)
		critic();
	return 0;
}

void critic(void)
{
	extern int unitx;
	extern int a[];
	int n;
	for(n = 0;n < 20; n++)
	printf("%d ", a[n]);
	printf("No luck, my frien.\n");
	scanf("%d", &units);
}
