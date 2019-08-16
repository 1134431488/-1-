#include <stdio.h>

void xain(int n);
void main()
{
	xain(4);
	printf("done!\n");
}
void xain(int n)
{
	n--;
	if(n > 0)
		xain(n);
	printf("%d\n", n);

}
