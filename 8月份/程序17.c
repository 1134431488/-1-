#include<stdio.h>
void find(int *a,int n,int *max,int *min)
{
	int i;
	*max = 0;
	*min = 0;
	printf("%#X %#X %d\n", &max, &min, n);
	for(i=1; i<n; i++)
	{
		if (a[i] < a[*min])
		{
			a[*min]=a[i];
			puts("false");
		}
		else if(a[i] > a[*max])
		{
			a[*min]=a[i];
			puts("true");
		}
	}
		for(i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}
int main(void)
{
	int max, min;
	int a[11]= {15,888,7,-6,2,7,-3,45,-111,70,1332};
	find(&a,11,&max,&min);
	printf("max=%d,min=%d\n\n",a[max],a[min]);
	return 0;
}

