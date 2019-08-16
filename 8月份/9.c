#include <stdio.h>
#include <string.h>
struct book
{
	char name[100];
};
int main(void)
{
	struct book l, * p;
	
	strcat(l.name, "123");
	p = &l;
	printf("%s %s\n", l.name, p[0].name);
	
	return 0;
}
