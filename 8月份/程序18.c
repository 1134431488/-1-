#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[4];
	const char s2[] = "456";
	strncpy(s1, s2, 3);//����
	s1[3] = '\0';    //0-3 3�����һ��Ԫ�ص��±�
	fputs(s1, stdout);
	
	return 0;
}
