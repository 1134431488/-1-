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
	int status;	/* ˽��Ϊ0������Ϊ1 */
	union
	{
		struct owner owncar;
		struct leasecompany leasecar;
	};
};

int main(void)
{
	struct car_data flits;
	strcat(flits.owncar.socsecurity, "����2");
	printf("%s\n", flits.owncar.socsecurity);
	
	return 0;
}
//���ڣ����flits��car_data���͵Ľṹ������������flist.owncar.socsecurity����flist.ownerinfo.owncar.socsecurity.
