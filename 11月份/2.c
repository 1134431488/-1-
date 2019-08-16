#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	double *p;
	int i;

	for(i = 200000000;; i+=1)
	{
		printf("%d\n", i);
		p = (double *)malloc(i * sizeof(double));
		if(p == NULL)
		{
			printf("i = %d Byte 结束分配.\n", i);
			printf("分配了%.2f MB\n", (float)i / (float)(1024 * 1024));
			sleep(5);
			free(p);
			break;
		}
		free(p);
	}

	return 0;
}
