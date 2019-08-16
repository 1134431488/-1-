#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, c;
	printf("«Î ‰»Î≥§ øÌ ∏ﬂ:\n");
	scanf("%d %d %d", &a, &b, &c);
	int s1 = a * b;
	int s2 = b * c;
	int s3 = a * c;
	printf("s1:%d, s2:%d, s3:%d\n", s1, s2, s3);
	system("pause");
	return 0;
}
