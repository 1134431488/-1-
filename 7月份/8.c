#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	enum color {red = 1, green, blue};
	enum color favorite_color;

	/*ask user to choose color*/
	printf("��������ϲ������ɫ��(1.red, 2.green 3.blue):");
	scanf("%d", &favorite_color);
	/*������*/
	switch (favorite_color)
	{
		case red :
			puts("��ϲ������ɫ�Ǻ�ɫ");
			break;
		case green :
			puts("��ϲ������ɫ����ɫ");
			break;
		case blue :
			puts("��ϲ������ɫ����ɫ");
			break;
		default :
			printf("��û��ѡ����ϲ������ɫ\n");
	}

	return 0;
}
