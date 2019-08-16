#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	enum color {red = 1, green, blue};
	enum color favorite_color;

	/*ask user to choose color*/
	printf("请输入你喜欢的颜色：(1.red, 2.green 3.blue):");
	scanf("%d", &favorite_color);
	/*输出结果*/
	switch (favorite_color)
	{
		case red :
			puts("你喜欢的颜色是红色");
			break;
		case green :
			puts("你喜欢的颜色是绿色");
			break;
		case blue :
			puts("你喜欢的颜色是蓝色");
			break;
		default :
			printf("你没有选择你喜欢的颜色\n");
	}

	return 0;
}
