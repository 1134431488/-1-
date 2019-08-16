#include <stdio.h>
#include <string.h>
struct owner
{
	char socsecurity[12];
};

struct leasecompany
{
	char name[40];
	char headquarters[40];
};

struct car_data
{
	char make[15];
	int status;	/* 私有为0，租赁为1 */
	union
	{
		struct owner owncar;
		struct leasecompany leasecar;
	};
};

int main(void)
{
	struct car_data flits;
	strcat(flits.owncar.socsecurity, "测试2");
	printf("%s\n", flits.owncar.socsecurity);
	
	return 0;
}
//现在，如果flits是car_data类型的结构变量，可以用flist.owncar.socsecurity代替flist.ownerinfo.owncar.socsecurity.
