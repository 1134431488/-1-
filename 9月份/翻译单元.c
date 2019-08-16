#include <stdio.h>
void xxx(void)
{
	extern int cc;//显示引用声明一个属于其他翻译单元的外部链接变量
	printf("%d", cc);
}
