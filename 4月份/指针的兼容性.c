#include <stdio.h>
	int main(void)
	{

		int *pt;
		int (*pa)[3];
		int ar1[2][3];
		int ar2[3][2];
		int **p2;
		pt = &ar1[0][0];
		pt = ar1[0];
		pt = ar1;				//��Ч
		pa = ar1;				//����ָ���ں�3��int����Ԫ�������ָ��
		pa = ar2;				//��Ч
		p2 = &pt;				//����ָ�붼��ָ��������
		*p2 = ar2[0];			//����ָ��int��ָ��
		p2 = ar2;
		return 0;
	}
 
