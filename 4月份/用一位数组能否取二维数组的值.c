#include <stdio.h>
int main(void)
{
	int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}}, n = 8, m;
	while(n) {
		printf("%d\n",zippo[n]);
		n--;
	}
	n = 8;
	while(n) {
		printf("%d--\n",zippo[n]);
		n--;
	}

	return 0;
}
