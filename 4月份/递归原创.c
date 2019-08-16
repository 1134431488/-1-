#include<stdio.h>
int main(void)
{
//	int n[3], i;
	void xxx(int);//函数原型（函数声明）
	int cf(int, int )
//	for(i = 0; i < 3; i++)
//		if(scanf("%d", &n[i]) != EOF)//CTRL + Z是EOF的快捷键适用于windows系统
//			printf("n[%d] = %d\n", i, n[i]);
//	printf("\n");
	xxx(0);
	return 0;
}
void xxx(int i)//函数定义，i可以作为次方的值
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
				printf("请输入一个二进制数")
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
