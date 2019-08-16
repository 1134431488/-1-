#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL	31

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

struct rect
{
	double x;
	double y;
};
double rect_area(struct rect r);
int main(void)
{
	struct book readfirst;
	int score;
	double area;

	area = rect_area((struct rect)
	{
		10.5, 20.0
	});	//把复合字面量作为实际参数传递
	printf("area = %.2lf\n", area);
	printf("Enter test score: ");	//输入测试成绩
	scanf("%d", &score);

	if(score >= 84)
		readfirst = (struct book)
	{"书名1", "作者1", 11.25
	};
	else
		readfirst = (struct book)
	{"书名2", "作者2", 51.99
	};

	printf("Your assigned reading:\n");
	printf("%s %s %.2f", readfirst.title, readfirst.author, readfirst.value);

	return 0;
}



double rect_area(struct rect r)
{
	return r.x * r.y;
}


