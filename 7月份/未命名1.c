#include "stdio.h"
#include "math.h"
main()
{
  double x,s;
  printf("input number:\n");
  scanf("%lf",&x);
  s=sin(x);
  printf("sine of %lf is %lf\n",x,s);
}
