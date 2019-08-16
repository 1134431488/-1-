#include <stdio.h>
#define F 50
#define N 2

struct fund
{
	char a[F];
};
void show(const struct fund k[], int n);

int main(void)
{
//	show((struct fund[]) { {.a = "学海无涯"}, {.a = "书山有路"}}, N);
	struct fund f[N] =
	{
		{
			.a = "山水之间"
		},
		{
			.a = "鸟舞花飞"
		}
	};
	puts("输出main声明的结构地址"); 
	for(int n = 0; n < N; n++)
		printf("%d %#X		%#X\n", n, &f[n], f[n].a);
	show(f, N);
	return 0;
}

void show(const struct fund k[], int n)
{
//	for(int u = 0; u < n; u++)
//	{
//		puts(k[u].a);
//	}
puts("输出show指向的结构地址"); 
printf("%#X		%#X		%#X\n", &k, k[0], k[1]);
}
