#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	time_t t1, t2; //�ֱ���������time()ʹ�÷�ʽ�ĸ�ֵ����


	t1=time(0); //��һ��ʹ�÷�ʽ
	time(&t2); //�ڶ���ʹ�÷�ʽ


	printf("t1=%ld\n",t1);
	printf("t2=%ld\n",t2);
	printf("rand���������%d\n", RAND_MAX);
	printf("rand���������%d\n", INT_MAX);

	return(0);
}

