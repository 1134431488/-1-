#include <stdio.h>
void arr(int p[][2][2][2][2]);
int main(void)
{
	int u[2][2][2][2][2] = //关于多维元素分析，2 * 2 * 2 * 2 * 2 = 32  也就是2的5次幂
	{
		{
			{
				{{2, 2}, {2, 2}},
				{{2, 2}, {2, 2}},
			},
			{
				{{2, 2}, {2, 2}},
				{{2, 2}, {2, 2}},
			}
		},
		{
			{
				{{2, 2}, {2, 2}},
				{{2, 2}, {2, 2}},
			},
			{
				{{2, 2}, {2, 2}},
				{{2, 2}, {2, 2}},
			}
		}

	};
	int q, w, e, r, t;
	arr(u);
//	for(q=0; q<2; q++)
//		for(w=0; w<2; w++)
//			for(e=0; e<2; e++)
//				for(r=0; r<2; r++)
//					for(t=0; t<2; t++)
//						printf("%d\n", u[q][w][e][r][t]);
	return 0;
}
void arr(int p[][2][2][2][2])
{
	int q, w, e, r, t;
	for(q=0; q<2; q++)
		for(w=0; w<2; w++)
			for(e=0; e<2; e++)
				for(r=0; r<2; r++)
					for(t=0; t<2; t++)
//						printf("%d\n", p[q][w][e][r][t]);
						printf("%d\n", *(*(*(*(*(p + q) + w) + e) + r) + t));
}
