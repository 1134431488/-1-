#include <stdio.h>
#define LEN 20

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {				/* �ṹ��Ա����ʽ�����Էֺŷָ������һ������ԷֺŽ��� */
	struct names handle;	/* Ƕ�׽ṹ */
	char favfood[LEN];		/* ϲ����ʳ�� */
	char job[LEN];			/* ���� */
	float income;			/* ���� */
};

int main(void) {
	struct guy fellow[2] = {	/* ��������guy�ṹ(����)������ */
		{
			{"Ewen", "Villard"},	/* �ṹ��Ա��ʼ���Զ��ŷָ� */
			"grilled salmon",
			"personality coach",
			 68112.00
		},
		{
			{"Rodney", "Swillbelly"},
			"tripe",
			"tabloid editor",
			432400.00
		}
	};	/* �ṹ��Ա��ʼ���Զ��ŷָ������һ������ԷֺŽ��� */
	struct guy * him;	/* ����һ��ָ��ṹ��һάָ�� */
	
	printf("address #1: %#X    #2: %#X\n", &fellow[0], &fellow[1]);	/* ��������ṹԪ�ص��׵�ַ */ 
	him = &fellow[0];	/* ���߱�������ָ��ָ��δ�	*/ 
	printf("pointer #1: %#X    #2: %#X\n", him, him + 1);	/* ������һά�ṹָ��address�Լ�ƫ�� + 1λ�ú�ĵ�ַ */ 
	printf("him->income is $%.f:(*him).income is $%.2f\n", him->income, (*him).income);	/* ���ֽṹָ�����ó�Ա�ķ�ʽ */
	him++;	/*ָ����һ���ṹ��Ԫ�ص��׵�ַ*/
	printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);	/* ����ṹָ��ָ��Ľṹ��Ա��Ƕ�׽ṹ�Ľṹ��Ա�ķ�ʽ */
	
	return 0;
}
