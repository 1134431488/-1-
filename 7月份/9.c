#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	enum day {saturday, sunday, monday, tuesday, wednesday, thursday, friday};
	
	int a = 1;
	enum day weekend;
	weekend = (enum day) a;	//	类型转换
//	weekend = a;	//错误,但可以运行 
	printf("weekend:%d", weekend);
	 
	return 0;
}
