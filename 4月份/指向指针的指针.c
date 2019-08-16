#include <stdio.h>
void hs(void);
int main(void)
{
	int a = 180;
	int *p = &a;//a是一个变量不是一个地址，赋值给p记得加&
	int **m = &p;//指向指针的指针 

	printf("%#X %#X %#X\n",&a, &p, m);//三者等价 
	printf("%d %d %d\n\n",a, *p, **m);//**m在此处的含义，首先取出&p储存的p值(&a),接着再从&a取出180 

	hs();
	return 0;
}
void hs(void)
{
	int a = 190;
	int *p = &a;//a是一个变量不是一个地址，赋值给p记得加&
	int **m = p;//指向指针的指针

	printf("%#X %#X %#X\n",&a, p, m);//三者等价 
	printf("%d %d %d\n\n",a, *p, *m);//*m在此处的含义，p等同于&a，m指向的是p，那么m等同于&a，*m=190 

}
