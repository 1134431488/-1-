#include <stdio.h >
#define SIZE 5
int main(void)
{
	int as[SIZE] = {2,2,3,4,2};//�����԰���������һ���ַ���
	int n, m, b;

	for(m = 0; m < SIZE; m++ )
	{

		b = 0;	//����b 
		
		for(n = 0; n < SIZE; n++ )
		{
			if(as[m] == as[n] && as[m] != 0)//0��Ϊһ����ʶ������Ҫ�����ж�
			{
				b++;//b = 2˵���ظ�
				if(b >= 2)
					as[n] = 0;
			}

		}

	}
	for(n = 0; n < SIZE; n++)
		printf("%d\n",as[n]);
	return 0;
}
/*
��һ��ѭ��             as[0] = 2
2 = 2 ��true  b = 1
2 = 2 ��true  b = 2    ���as[1] = 0
2 = 3 ? false
2 = 4 ? false
2 = 2 ? true  b = 3    ���as[1] = 0
�ڶ���ѭ��             as[1] = 0
0 = 2 ��false
0 = 0 ��false Ϊ0 b������
0 = 3 ? false
0 = 4 ? false
0 = 0 ? false
������ѭ��             as[2] = 3
3 = 2 ��false
3 = 0 ��false
3 = 3 ? true  b = 1
3 = 4 ? false
3 = 0 ? false*/
