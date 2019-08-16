#include <stdio.h>
int main(void)
{
	int z[4][2] = {{2,4},{6,8},{1,3},{5,7}};
	int (*pz)[2];
	pz = z;

	printf("pz = %#X,	pz + 1 = %#X\n", pz, pz + 1);
	printf("%#X %#X\n", &pz, &pz + 1);

	printf("pz[0] = %#X, pz[0] + 1 = %#X\n", pz[0], pz[0] + 1);
	printf("*pz = %#X, *pz + 1 = %#X\n", *pz, *pz + 1);
	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("*pz[0] = %d\n", *pz[0]);
	printf("**pz = %d\n", **pz);
	printf("pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));

	return 0;
}
