#include <stdio.h>
int main(void)
{
	int u[5] = {};//�����ʼ������һ�ַ�ʽ
	int n;
    int *p1 = &u[1];
    int *p2 = &u[0];
    printf("%d " , p1 - p2);
	for(n = 0; n < 5; n++)
		printf("%d ", u[n]);
	printf("\n\n%#X %#X", &p1 + 1, &p1);//�ӽ������ + 1ʵ�����Ǽ���8�ֽڣ��˵�ַ��64λ�µĳ�����8�ֽڳ���
	printf("\n\n%#X %#X", p1 + 1, p1);//�ӽ������ + 1ʵ�����Ǽ���4�ֽڣ���ָ��int���͵��ֽڳ���
	
	printf("\n%s\n", p1 - 1 > p1 ?"����p1" : "С��p1");
	return 0;
}
