#include <stdio.h>
void report_count();//��������
void accumulate(int k);	//����
int count = 0;	/*file scope extern linkage*/

int main(void)
{
	int value;	/*�Զ�����*/
	register int i;	/*�Ĵ�������*/

	printf("����һ��������, 0�˳�:");
	while(scanf("%d", &value) == 1 && value > 0)
	{
		++count;	//Use file scope variable
		for(i = value; i >= 0; i--)
			accumulate(i);
		printf("����һ��������, 0�˳�:");
	}
	report_count();
	return 0;
}

void report_count()
{
	printf("count:%d\n", count);
}
