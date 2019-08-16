#include <stdio.h>
#include <string.h>
char *pbrk(const char *cs, const char *ct);
int main(void)
{
	printf("%#X\n",	pbrk("aaa","bcn"));
	return 0;
}
char *pbrk(const char *cs, const char *ct)// 参数1和2都是指针char类型 
{
	const char * sc1, *sc2;//声明两个指针char类型的变量 
	for( sc1 = cs; *sc1 != '\0'; ++sc1)//对sc1指针赋值第一个参数，判断其首地址若不为空字符则执行，否则不执行，每次执行都地址参数1 
	{//这里要提醒一点无论sc1是不是前缀模式，都是循环结束后才更新循环的条件 
		for( sc2 = ct; *sc2 != '\0'; ++sc2)//对sc2赋值参数2，判断其首地址不为空字符，则递增参数2
		{
			if(*sc1 == *sc2)//从参数1的第一位元素，对比参数2的所有元素进行遍历 
			{
				return (char *) sc1;
			}
		}
	}
	return NULL;
}
