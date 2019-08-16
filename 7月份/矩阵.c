#include <stdio.h>
int main(void)
{
	int mt[][3] = {0};
	int N = 4,M = 4 ;
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			printf("i:%d  j:%d об╠Й:%d\n",i , j, i * M + j );
		}
		puts("");
	}
		
}
