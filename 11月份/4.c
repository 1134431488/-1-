#include <stdio.h>
int i;
int main(void)
{
	for(i = 1; i <= 3; i++)
	{
		static int sum = 1; //����������һ�Σ��ٴα����ò������¸�ֵΪ1������ʹ��֮ǰ��sum
		sum += i;
		printf("%d\n", sum);
	}
	return 0;
}
