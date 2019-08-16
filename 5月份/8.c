#include <stdio.h>

char greeting[50] = "Hello, and" " how are" " you"
                    " today!";
char greetingX[50] = "Hello, and how are you today!";

int main(void)
{
	char *p = "W\\0e";
	int a[] = {1, 2, 3, 4};
	const char m2[] = "If you can't think of anything, fake it.";
	const char m1[40] = "Limit yourself to one line's worth.";
	printf("sizeof(&p) = %d\n", sizeof(&p)); 
	puts(p);
	printf("size = %d\n", sizeof(a) / sizeof(a[0]));
	printf("%s, %p, %c\n", "W0e", "are", *"space farers"+1);
	printf("\"Run, Spot, run!\" exclaimed Dick.\n");
	int n = 8;
	char cookies[1];	//有效
	char cakes[2 + 5];	//有效，数组大小是整型常量表达式
	char pies[2 * sizeof(long double) + 1];	//有效
	char crumbs[n];	//在C99标准之前无效，在C99标准之后这种数组是变长数组 
	return 0;
}
