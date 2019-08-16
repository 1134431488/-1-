#include<stdio.h>
int cf(int);
int main(void)
{
	int ch, n, num, m;
	char zu[] = {};
	n = 0;//次方
	while((ch = getchar()) != EOF)
	{
		zu[n] = ch;
		if(ch == '\n')
			continue;//丢弃空格
		printf("n=%d\n", n);
		n++;
	}

	for(m = 0; m <= n; n--)
		num += zu[m] * cf(n);
	printf("十进制结果为 %d\n", num);
	return 0;
}

int cf(int n)
{
	int a;
	if(n == 0)
		return 1;
	else if(n < 0)
		return -1;
	else if(n > 0)
	{
		a *= 2;
		n--;
	}
	return a;
}
