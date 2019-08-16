#include <stdio.h>

struct rect {
	double x;
	double y;
};
double rect_areap1(struct rect * rp); 
double rect_areap1(struct rect * rp)
{
//	return (*rp).x * (*rp).y;
	return rp->x * rp->y;	/* rp为指针所以用->运算符 */
}

int main(void)
{
	double area;
	area = rect_areap1( &(struct rect) {10.5, 20.0} );	/* 形参为符合字面量地址 */
	printf("%.2lf\n", area);
	return 0;
}
