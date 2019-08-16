#include <stdio.h>
int main(void)
{
	int arr[3][2] = {0,1,2,3,4,5};
	int n;
	char ar[3][4] =
	{
		"aaa",
		"bbb",
		"ccc",
	};

	for(n = 0; n < 3; n++)
		printf("%#X %d\n", arr[n], *arr[n]);


	for(n = 0; n < 3; n++)
		printf("%#X %s\n", ar[n], ar[n]);
		
	return 0;
}
