#include <stdio.h>
#include <string.h>
#define L 6
int main(void)
{
	const char *list[L] =
	{
		"asdqq","zxc","asdww","zxc","xcvcxv","asdjjjj"
	};
	int c = 0;
	int i;

	for(i = 0; i < L; i++)
		if(strncmp(list[i], "asd", 3) == 0)//strncmp�ĵ�����������Ҫ�Աȵ��ַ�����
		{
			printf("%s\n",list[i]);
			c++;
		}
	printf("Done!");
	return 0;
}
