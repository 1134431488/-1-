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
//	show((struct fund[]) { {.a = "ѧ������"}, {.a = "��ɽ��·"}}, N);
	struct fund f[N] =
	{
		{
			.a = "ɽˮ֮��"
		},
		{
			.a = "���軨��"
		}
	};
	puts("���main�����Ľṹ��ַ"); 
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
puts("���showָ��Ľṹ��ַ"); 
printf("%#X		%#X		%#X\n", &k, k[0], k[1]);
}
