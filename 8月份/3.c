#include <stdio.h>

int a[111000];         //�ͻ�����n�������
int v[110],n;           //ֱ�ӳ���n�������

int main(void)
{
	for(int i=1; i<=10; i++)
		scanf("%d",&v[i]);

	scanf("%d\n",&n)	;                     //��������

	for(int i=1; i<=n; i++)
		a[i] = 9999999;

	a[0] = 0;

	for(int i = 1; i <= n; i++)                  //n����
		for(int j = 1; j <= 10; j++)                    //10����
			if(i >= j)
				a[i] = min(a[i], v[j] + a[i-j]);

	printf("%d\n", a[n])	;					  //�ж��Ƿ�10����
	
	return 0;
}
