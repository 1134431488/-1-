#include <stdio.h>
int pr;
void hanshu(int k);
int main(void)
{
	printf("����ֵ��");

	while(scanf("%d", &pr) == 1 && pr > 0)
	{
		for(int n = pr; n >= 0; n--)    //  �ڽ�����ʱ�ᴫ��0
			hanshu(n);
		printf("����ֵ��");
	}

	return 0;
}
