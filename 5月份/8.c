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
	char cookies[1];	//��Ч
	char cakes[2 + 5];	//��Ч�������С�����ͳ������ʽ
	char pies[2 * sizeof(long double) + 1];	//��Ч
	char crumbs[n];	//��C99��׼֮ǰ��Ч����C99��׼֮�����������Ǳ䳤���� 
	return 0;
}
