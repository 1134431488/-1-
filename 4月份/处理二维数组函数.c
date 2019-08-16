#include <stdio.h>
#define ROWS 3 //3行 
#define COLS 4 //2列 
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int);	//省略形参名，没有问题
int sum2d(int(*ar)[COLS], int rows);//另一种语法
int main(void)
{
	int junk[ROWS][COLS] = {{2,4,6,8},{3,5,7,9},{12,10,8,6}};
	sum_rows(junk, ROWS);//传入一个地址
	sum_cols(junk, ROWS);
	printf("所有元素的总和=%d\n", sum2d(junk, ROWS));

	return 0;
}
void sum_rows(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;

	for( r=0; r<rows; r++ )
	{
		tot = 0;//结果初始化
		for(c = 0; c < COLS; c++)
			tot += ar[r][c];
		printf("行 %d：和 = %d\n", r, tot);
	}
}
void sum_cols(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;

	for(c = 0; c< COLS; c++)
	{
		tot = 0;
		for(r = 0; r < rows; r++)
			tot += ar[r][c];
		printf("列 %d: 和 = %d\n", c, tot);
	}
}

int sum2d(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot = 0;
	for (r = 0; r < rows; r++)
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];//与上两个循环不同，tot没有初始化，且把每个元素都加起来了 

	return tot;
}
