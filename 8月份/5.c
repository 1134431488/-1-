#include <stdio.h>
#include <stdlib.h>

/**
��̬�ڴ����
��ϵͳ����ͻ���
*/

void function(int **address)
{
	printf("2.%#X\n", address);
	int i = 100;
	// ��i�ĵ�ֵַ��ֵ�������ָ�����
	*address = &i;

	printf("3.%#X\n", address);
}

main()
{

	// ����int���͵�һ��ָ�����iPoint
	int * iPoint;

	printf("1.%#X\n", &iPoint);
	function(&iPoint);

	printf("*iPoint == %d\n",*iPoint);// 100
	printf("*iPoint == %d\n",*iPoint);// 0
	printf("*iPoint == %d\n",*iPoint);// 0



	system("pause");
}
