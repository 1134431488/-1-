#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
extern const double PI;
extern const char *MONTHS[];

int main(int argc, char *argv[]) {
	int n;
	
	printf("PI %lf\n", PI);
	for(n = 0; n < 12; n++)
	{
		printf("MONTHS%s\n", MONTHS[n]);
	}
	
	return 0;
}
