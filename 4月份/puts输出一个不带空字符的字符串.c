#include <stdio.h>
int main(void)
{
	int n;
	char side_a[] = "Side A";
	char dont[] = {'W','O','W','!'};
	char side_b[] = "Side B";
	puts(dont);/*dont 不是一个字符串*/
	while(dont[n])
	{
		printf("[%c]\n",dont[n++]);
	}
	printf("[");
	putchar(dont[4]);	
	printf("]");
	printf("\ndont is the number of %d bytes\n",sizeof(dont));
	return 0; 
 } 
