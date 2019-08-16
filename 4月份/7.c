#include <stdio.h>
#define LEN 20
const char * msgs[5] =
{
	"	Thank you for the wonderful evening, ",	/*谢谢你今晚的盛情款待, 埃文*/
	"You certainly prove that a ",				/*你当然证明了，*/
	"is a special kind of guy. We must get together",	/*是一种特殊的人。我们必须聚在一起，*/
	"over a delicious ",						/*在一个美味的，*/
	" and have a few laughs"					/*然后开怀大笑*/
};

struct names
{
	char first[LEN];	/*第一*/
	char last[LEN];		/*最后*/
};

struct guy
{
	struct names handle;	/*嵌套结构*/
	char favfood[LEN];		/*最喜欢的食物*/
	char job[LEN];			/*工作*/
	float income;			/*收益*/
};

int main(void)
{
	struct guy fellow =	/*朋友*/
	{
		{"Ewen", "Villard"	/*埃文， 维拉德*/},
		"grilled salmon",	/*烤 鲑鱼*/
		"personality coach",	/*品格 指导*/
		68112.00				/*收益*/
	};

	printf("Dear %s, \n\n", fellow.handle.first);	/*亲爱的埃文*/
	printf("%s%s.\n", msgs[0], fellow.handle.first);	/*谢谢你今晚的盛情款待，尤恩。*/
	printf("%s%s\n", msgs[1], fellow.job); 	/*你当然证明了一位个性教练*/
	printf("%s\n", msgs[2]);	/*是一个特殊的人。 我们必须聚在一起*/
	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);	/*一边享用美味的烤三文鱼，一边开怀大笑。*/
	if(fellow.income > 150000.0)
		puts("!!");
	else if(fellow.income > 75000.0)
		puts("!");
	else
		puts(".");
	printf("\n%40s%s\n", " ", "See you soon,");	/*很快见到你,*/
	printf("%40s%s\n", " ", "Shalala");			/*莎拉拉*/

	return 0;
}
