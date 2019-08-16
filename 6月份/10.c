#include <stdio.h>
int main(void)
{
	int n,m;
	int result = 0;
	for(m = 99, n = 1; n < 100; n++, m--)
	{
//		printf("%d\n", result +=n );	//1+2+3+4+5+...+99
		result += n + m;
		printf("%d = %d + %d\n", result, n, m);
		
	}
	printf("result ¡Â 2 = %d\n", result / 2);
	return 0;
}
