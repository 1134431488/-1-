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

union data
{
	struct owner owncar;
	struct leasecompany leasecar;
};

struct car_data
{
	char make[15];
	int status;	/* Ë½ÓÐÎª£°£¬×âÁÞÎª£±¡¡*/
	union data ownerinfo;
};

int main(void)
{
	struct car_data flits;
	strcat(flits.ownerinfo.owncar.socsecurity, "²âÊÔ"); 
	printf("%s\n", flits.ownerinfo.owncar.socsecurity);
	
	return 0;
}
