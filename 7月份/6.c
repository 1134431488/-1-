#include <stdio.h>

enum day {mon = 0, tue, wed,thu,fri,sat,sun};
int main(void)
{
	enum day day1;
	day1 = wed;
	printf("%d\n", day1);
	
	return 0;
}
