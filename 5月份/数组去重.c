#include <stdio.h >
#define SIZE 5
int main(void)
{
	int as[SIZE] = {2,2,3,4,2};//假设性把整数看作一个字符串
	int n, m, b;

	for(m = 0; m < SIZE; m++ )
	{

		b = 0;	//重置b 
		
		for(n = 0; n < SIZE; n++ )
		{
			if(as[m] == as[n] && as[m] != 0)//0作为一个标识，不需要进行判断
			{
				b++;//b = 2说明重复
				if(b >= 2)
					as[n] = 0;
			}

		}

	}
	for(n = 0; n < SIZE; n++)
		printf("%d\n",as[n]);
	return 0;
}
/*
第一次循环             as[0] = 2
2 = 2 ？true  b = 1
2 = 2 ？true  b = 2    标记as[1] = 0
2 = 3 ? false
2 = 4 ? false
2 = 2 ? true  b = 3    标记as[1] = 0
第二次循环             as[1] = 0
0 = 2 ？false
0 = 0 ？false 为0 b不递增
0 = 3 ? false
0 = 4 ? false
0 = 0 ? false
第三次循环             as[2] = 3
3 = 2 ？false
3 = 0 ？false
3 = 3 ? true  b = 1
3 = 4 ? false
3 = 0 ? false*/
