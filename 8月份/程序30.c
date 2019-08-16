#include <stdlib.h>
#include <stdio.h>
void main(void)
{
	float n = 999.0;
	int m = 888;
	double k = 10.0;
	int b;
	printf("n:%#X\nm:%#X\nk:%#X\nb:%#X\n\n", &n,&m,&k,&b);
	for(b = 0; b < 4; b++)
		printf("%#X\n", &b + b);

	while(scanf("%d", &b) == 1)
		printf("%d\n", b);
	system("PAUSE");
}
