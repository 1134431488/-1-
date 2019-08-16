#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
	int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
	long answer;

	printf("数组合%d\n", answer = sum(marbles, SIZE));
	printf("数组字节%d\n", sizeof(marbles));

	return 0;
}
int sum(int ar[], int n)
{
	int i, total = 0;
	for(i = 0; i < n; i++)
		total += ar[i];
	return total;
}
