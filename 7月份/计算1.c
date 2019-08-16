#include <stdio.h>
int main(void)
{
	float a = 11;
	float b = 2; 
	float x = (a + b) / 2;
	float y = (a - b) / 2;

	puts("已知x + y = a，x - y = b，求x与y的值");
	printf("x=%.3f\n",x); 
	printf("y=%.3f\n",y);
	
	return 0;
 } 
 /*
 一、和差问题
 和加上差，越加越大；除于2，便是大的；
 和减去差，越减越小；除于2，便是小的； 
 */
