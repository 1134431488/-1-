#include<stdio.h>
long f(int);
long r(int);
int main(void)
{
	int n, a;
	printf("���������0С��17������:");
	while(scanf("%d", &n) ==1)
	{
		if(n <=0 )
			printf("��������ȷ����ֵ��");
		else
		{
			a = f(n);
			printf("\nѭ����n�����׳�ֵΪ��%d\n",a);
			a = r(n);
			printf("β�ݹ�n�����׳�ֵΪ��%d\n\n",a);
			printf("���������0С��12������:");
		}
	}
	return 0;
}
long f(int n)
{
	long a;
	for(a = 1; n > 1; n--)
		a *= n;

	return a;
}
long r(int n)
{
	long a;
	if(n > 0)
		a = n * r(n - 1);
	else
		a = 1;

	return a;
}
