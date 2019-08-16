#include <stdio.h>
int main(void)
{
	int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
	printf("zippo = %#X, zippo + 1 = %#X\n", zippo, zippo + 1);//Æ«ÒÆ2¸öint 
	printf("zippo[0] = %#X, zippo[0] + 1 = %#X\n", zippo[0], zippo[0] + 1);//Æ«ÒÆ1¸öint
	printf("*zippo = %#X, *zippo + 1 = %#X\n", *zippo, *zippo + 1); 
	
	printf("zippo[0][0] = %X\n", zippo[0][0]);
	printf("*zippo[0] = %d\n", *zippo[0]);
	printf("**zippo = %d\n", **zippo);
	
	printf("zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo+2)+1) = %d\n", *(*(zippo + 2) + 1));
	return 0;
}
