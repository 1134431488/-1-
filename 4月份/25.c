#include <stdio.h>

struct person{
	int id;
	
	struct {
	char first[20];
	char last[20];
	};	// �����ṹ���ޱ����	
	
};

int main(void)
{
	struct person ted = {8483, {"Ted", "Grass"}};
	puts(ted.first);
	 
	return 0;
}
