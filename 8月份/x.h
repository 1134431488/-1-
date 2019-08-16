#include <stdio.h>
#define LEN 20
const char * msgs[5] =
{
	"	Thank you for the wonderful evening, ",
	"You certainly prove that a ",
	"is a special kind of guy. We must get togther",
	"over a delicious ",
	" and have a few laughs"
};	//外部链接文件作用域静态存储期只读变量

struct names
{
	char first[LEN];
	char lasr[LEN];
};
struct guy
{
	struct names handle;	//嵌套结构
	char favfood[LEN];
	char job[LEN];
	float income;
};

