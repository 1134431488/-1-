#include <stdio.h>
#define k 3       //k的值预设处 
int main(void)
{
	int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}}, n, m;
	printf("  zippo=%#X\nzippo+%d=%#X\n\n",zippo, k, zippo + k);//二维数组名 + k值，得出的地址 = k行的行首元素地址。
	for( n=0; n<4; n++)
		for( m=0; m<2; m++) {
			if( &zippo[n][m] == zippo + k) {
				printf("第%d行第%d列与zippo+%d相等\n",n, m, k);
				printf("zippo[%d][%d]=%#X\n", n, m, &zippo[n][m]);
			}
		}

	return 0;
}
