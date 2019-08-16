#include <stdio.h >
#define SIZE 5
int main(void)
{
	int as[SIZE] = {3,2,2,3,4};
	int n, m;

	for(m = 0; m < SIZE; m++ )
	{
		for(n = m + 1; n < SIZE; n++ )
		{
			if(as[m] == as[n] )
				as[n] = 0;
		}
	}
	for(n = 0; n < SIZE; n++)
		printf("%d\n",as[n]);
	return 0;
}
