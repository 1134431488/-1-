#include <stdio.h>
int main(void)
{
	int x;
	int n;
	scanf("%d", &x);
	for(n = -1; n < 2; n++)
	{
		if(n == x)
		{
			printf("n = %d x = %d", n, x);
			break;//ÍË³öÑ­»·
		}
	}
    printf("½áÊø£¡")
	return 0;
}
