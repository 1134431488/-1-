#include <stdio.h>
#define LEN 30
struct book
{
	char  * title[LEN];
	float a;
};
void sort(struct book * pst, int n);
void show(struct book * pst, int n);
int main(void)
{
	int n;
	struct book library[5];
	for(n = 0; n < 5; n++)
	{
		printf("输入一个金额:");
		scanf("%f", &library[n].a);
		puts("");
	}
	sort(library, n);
	show(library, n);
	return 0;
}
void sort(struct book * pst, int n)
{
	int a, b;
	float t;	//临时变量
	for(a = 0; a < n; a++)
	{
		for(b = a + 1; b < n; b++)
		{
			if(pst[a].a > pst[b].a)
			{

				t = pst[a].a;
				pst[a].a = pst[b].a;
				pst[b].a = t;
			}
			else
				continue;
		}
	}
}
void show(struct book * pst, int n)
{
	for(int i = 0; i < n; i++)
		printf("%.2f ", pst[i].a);
}

