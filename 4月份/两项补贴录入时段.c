#include <stdio.h>
#define SIZE 7
int main(void)
{
	int n, ch;
	const char *p[SIZE] =
	{
		"����һ��16��00 - 20��00",
		"���ڶ���12��00 - 16��00",
		"��������08��00 - 12��00",
		"�����ģ�16��00 - 20��00",
		"�����壺12��00 - 16��00",
		"��������08��00 - 12��00",
		"�����գ� ------ȫ��ʱ��"
	};
	for(n = 0; n < SIZE; n++)
	{
		fputs(*(p + n), stdout);
		putchar('\n');
	}
	printf("\n�Ƿ�鿴��ַ�����������֣�\n");
	printf("1.��      2.����\n");
	while((ch = getchar()) != '\n')
	{
		switch(ch)
		{
			case '1':
				printf("http://210.76.66.108/WorkFlow\n");
				getchar();
				break;
			case '2':
				break;
			default:
				break;
		}
	}
	return 0;
}
