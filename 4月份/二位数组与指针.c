#include <stdio.h>
#define k 3       //k��ֵԤ�账 
int main(void)
{
	int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}}, n, m;
	printf("  zippo=%#X\nzippo+%d=%#X\n\n",zippo, k, zippo + k);//��ά������ + kֵ���ó��ĵ�ַ = k�е�����Ԫ�ص�ַ��
	for( n=0; n<4; n++)
		for( m=0; m<2; m++) {
			if( &zippo[n][m] == zippo + k) {
				printf("��%d�е�%d����zippo+%d���\n",n, m, k);
				printf("zippo[%d][%d]=%#X\n", n, m, &zippo[n][m]);
			}
		}

	return 0;
}
