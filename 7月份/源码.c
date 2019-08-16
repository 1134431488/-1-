#include <stdio.h>
struct {
	int code;
	float cost;
}item, * ptrst;

int main(void)
{
	ptrst = &item;
	ptrst->code  = 112;
	printf("5种方式输出:\n");
	printf("1.ptrst->code %d\n", ptrst->code);
	printf("2.(*ptrst->code %d\n)", (*ptrst).code);
	printf("3.ptrst[0].code %d\n", ptrst[0].code);
	printf("4.item.code %d\n", item.code);
//	printf("5.item[0].code %d\n", item[0].code);	//仅指针可以这么做 	
	return 0;
}
