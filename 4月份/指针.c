#include<stdio.h>
void mikado(int);/*����ԭ��*/
int main(void)
{
	int pooh = 2, bah = 5; /*main()�ľֲ�����*/
	printf("poohֵ%d pooh��ַ%p\n",pooh, &pooh);
	printf("bahֵ%d bah��ַ%p\n",bah, &bah);
	mikado(pooh);
	return 0;
}
void mikado(int bah)/*��������*/
{
	int pooh = 10;	/*mikado()�ľֲ�����*/
	printf("poohֵ%d pooh��ַ%p\n",pooh, &pooh);
	printf("bahֵ%d bah��ַ%p\n",bah, &bah);
}

