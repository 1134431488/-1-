#include <stdio.h>
#include <string.h>
int main(void)
{
	int ar[10];
	int * restrict restar = (int *)malloc(10 * sizeof(int));
	int * par = ar;
	//����˵��restar�����Ƿ���malloc()���������ڴ��Ψһ�ҳ�ʶ�ķ�ʽ��par�Ͳ�����
	for(n = 0; n < 10; n++)
	{
		par[n] += 5;//����Ԫ�ص�ֵ����ֵΪ5
		restar[n] + =5;
		ar[n] *= 2;//2*5 = 10
		par[n] += 3;
		restar[n] += 3;
	}
	return 0;
}
