#include "x.h"
int main(void)
{
	struct guy fellow =
	{
		{"Ewen", "Villard"},
		"grilled salmon",
		"personality coach",
		68112.00
	};
	
	printf("Dear %s, \n\n", fellow.handle.first);
	printf("%s%s.\n", msgs[0], fellow.handle.first);
	printf("%s%s\n", msgs[1], fellow.job);
	printf("%s\n", msgs[2]);
	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
	
	if(fellow.income > 150000.0)
		puts("!!");
	else if(fellow.income > 75000.0)
		puts("!");
	else
		puts(".");
		
	printf("\n%40s%s\n", " ", "See you soon,");
	printf("%40s%s\n", " ", "Shalala");
	
	return 0;
}
