#include <stdio.h>
#include <math.h>
float ccc(float x);
int main(void)
{
	float i = 3;
	while(i != -99)
	{
		i--;
		printf("i = %.f\n", i);
		ccc(i);
	}

	return 0;
}
float ccc(float x)
{
	x = x + sqrt(((x - 1) * (x - 1)));
	printf("x = %.f\n", x);
	return x;
}
