#include <stdio.h>
#define LEN 20
const char * msgs[5] =
{
	"	Thank you for the wonderful evening, ",
	"You certainly prove that a ",
	"is a special kind of guy. We must get togther",
	"over a delicious ",
	" and have a few laughs"
};	//�ⲿ�����ļ�������̬�洢��ֻ������

struct names
{
	char first[LEN];
	char lasr[LEN];
};
struct guy
{
	struct names handle;	//Ƕ�׽ṹ
	char favfood[LEN];
	char job[LEN];
	float income;
};

