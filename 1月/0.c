/*
stdin
stdout
stderr
*/

#include <stdio.h>
int main(void)
{
	printf("please input the value a:\n");//�����˱�׼������Ĺ���
	//fprintf(stdout, "please input the value a:\n");
	int a;
	scanf("%d", &a);//�����˱�׼�������Ĺ��ܣ��Ӽ��̻�ȡ��Ϣ��������ȥ
	//fscanf(stdin, "%d", &a);
	//����Ҫ��a>0
	if(a < 0)
	{
		fprintf(stderr, "the value must > 0");//���ֵ���� > 0
		return 1;//�õ���֪���������main��������ֵ������0��������EXIT_FAILURE
	}
	return 0;//���򷵻�0������EXIT_SUCCESS
}
