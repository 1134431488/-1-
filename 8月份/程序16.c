#include <stdio.h>
#define SIZE 11
void find(int *a, int n, int *max, int *min);
int main(void)
{
	int oooooooooooooooooooooooooooooooooooooooooooooo___;
	float oooooooooooooooooooooooooooooooooooooooo,         o;
	int ooooooooooooooooooooooooo__________________________o;
	int oooooooooooooooooooooooooooooooooooooooooo___________o;
	int ooooooooooooooooooooooooooooooooooooooooooo,_________o;
	"oooooooo  oooooooo\
	oooooo\
	ooooooo\
	ooooooo\
	oooooooo\
	oooooo";
	int a[SIZE] = {15, 888, 7, -6, 2, 7, -3, 45, -111, 70, 1332};
	int max1, min1;

	find(&a, SIZE, &max1, &min1);
	printf("max=%d, min=%d\n", a[max1], a[min1]);

	return 0;
}
void find(int *a, int n, int *max, int *min)
{
	int i;

	*max = 0;
	*min = 0;
	for(i = 1; i < n; i++)
	{
		if(a[i] > a[*max])
		{
			*max = i;
			a[*max] = a[i];
		}
		//得知最大元素的下标，然后将此最大元素与其他元素再对比以此获得更大的元素下标
		else if (a[i] < a[*min])
		{
			*min = i;
			a[*min] = a[i];
			//得知最小元素的下标，然后将此最小元素与其他元素再对比以此获得更小的元素下标
		}
	}
	printf("max%d min%d\n", a[*max], a[*min]);
}
