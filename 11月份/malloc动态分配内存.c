#include <stdio.h>
#include <stdlib.h>/*Ϊmalloc(),free()�����ṩԭ��*/

int main(void)
{
	double *ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	if(scanf("%d", &max) != 1)/*���û�гɹ���ȡ*/
	{
		puts("Number not correctly emter -- bye.");
		exit(EXIT_FAILURE);//�쳣��ֹ
	}
	ptd = (double *) malloc(max * sizeof(double));
	if(ptd == NULL)/*��������ڴ�ʧ�ܷ���һ��NULL*/
	{
		puts("Memory allocation failed. Goobye.");
		exit(EXIT_FAILURE);
	}
	/*ptd����ָ����max��Ԫ�ص�����*/
	puts("Enter the values (q to quit):");
	while(i < max && scanf("%lf", &ptd[i]) == 1)
		++i;
	printf("Here are your %d entries:\n", number = i);
	for(i = 0; i < number; i++)
	{
		printf("%7.2f ", ptd[i]);
		if(i % 7 == 6)//��iΪ6,6����7������С�ڱ�������6С��7��������������
			putchar('\n');
	}
	if(i % 7 != 6)
		putchar('\n');
	puts("Done.");
	free(ptd);
	return 0;
}
