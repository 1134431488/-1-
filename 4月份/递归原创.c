#include<stdio.h>
int main(void)
{
//	int n[3], i;
	void xxx(int);//����ԭ�ͣ�����������
	int cf(int, int )
//	for(i = 0; i < 3; i++)
//		if(scanf("%d", &n[i]) != EOF)//CTRL + Z��EOF�Ŀ�ݼ�������windowsϵͳ
//			printf("n[%d] = %d\n", i, n[i]);
//	printf("\n");
	xxx(0);
	return 0;
}
void xxx(int i)//�������壬i������Ϊ�η���ֵ
{
	int n;
	if(i < 3)
		if(scanf("%d", &n) != EOF)
		{
			if(n <=1 || n >=0 )
			{
				xxx(i+1);
				printf("%d",n);

			}
			else
			{
				printf("������һ����������")
			}
		}


}
int cf(int i, int d)
{
	int q,w;
	for(q = 0; q < i; q++)
	{
		
	}
}
