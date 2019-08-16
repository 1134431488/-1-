#include<stdio.h>
void mikado(int);/*函数原型*/
int main(void)
{
	int pooh = 2, bah = 5; /*main()的局部变量*/
	printf("pooh值%d pooh地址%p\n",pooh, &pooh);
	printf("bah值%d bah地址%p\n",bah, &bah);
	mikado(pooh);
	return 0;
}
void mikado(int bah)/*函数定义*/
{
	int pooh = 10;	/*mikado()的局部变量*/
	printf("pooh值%d pooh地址%p\n",pooh, &pooh);
	printf("bah值%d bah地址%p\n",bah, &bah);
}

