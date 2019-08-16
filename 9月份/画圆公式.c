#include <stdio.h>
#include <math.h>
void huayuan(int x, int y, int r);//画圆函数
void main(void)
{
	huayuan(500, 400, 100);
}

void huayuan(int x, int y, int r)//起始坐标xy，半径r
{
	float pi = 3.1415926;
	int i, mx, my;

	for(i = 0; i <= 360; i++)
	{
		mx = x + r * cos(i* pi / 180);
		my = y - r * sin(i * pi / 180);
        printf("mx=%-8dmy=%d\n", mx, my);
	}
}


