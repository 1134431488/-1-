#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define lon 59		// int����

static int limit = 0;		// ����
static int times = 0;		// ����

void get1(char * p[limit], char array1[lon], int length);    //�洢����ַ������洢�����ַ���������

int main(void)
{
	extern int times;   //����ʽ����
	extern int limit;   //����ʽ����

	auto int length = 0;    //�������������ӣ��Զ��洢��

	char * save[limit];     //�洢����ַ������䳤���飬�Ա�������ά��

    puts("����һ��int������ֵԪ�ظ���");
	while( scanf("%d", &limit) == 1 )   //�ɹ���������1
	{
		getchar();		// �����ղ�����Ļس�����

		printf("���������%d\n", limit);
		for(int i = 0; i < limit; i++) //�±��0��limit-1
		{
			char array[lon] = {};		//�ڲ��������뿪��������forѭ�����Զ��ͷţ�����һ���ַ������ֽڴ�С59
			for(int j = 0; j < lon; j++, length++)  //0 -58  length����ѭ���Ĵ���
			{
				array[j] = getchar(); //�������ַ�������

				if(array[j] == ' ' || array[j] == '\n') //Ԫ���ǿո񣬻��߻��з�
				{
					// �ѿո��ַ��ͻس�������ַ���ĩβ��\0���ַ���
					// �ٵ��ú�����̬����ռ䣬��ָ�����鴢���ǿ�ռ䡣
					array[j] = '\0';
					get1(save, array, length);         //��������ʴ����Զ��庯��(�������ַ�������ĵ�ַ��forѭ���洢����char���飬�Լ�������ʵĳ���)
					printf("\nThe %d save is %s. \n", i, save[i]);
					break;
				}
				else
				{
					continue;
				}
			}

			length = 0;	// �Ұ�length����Ƕ��for�ĳ�ʼ����䣬�ҵ�GCC�ᱨ��˵δʹ�ñ��������ܹ��찡�������
		}

		printf("Here are your words:\n");
		for(int i = 0; i < limit; i++)
		{
			printf("The local is %p .\n", &save[i]);
			printf("The value is %s\n", save[i]);
		}

		// �������ͷŶ�̬�ڴ�����á�
		free(save);
		times = 0;
		limit = 0;

		printf("\nHow many words do you wish to enter(q to quit):");
	}
	printf("\nDone!\n");

	getchar();
	getchar();

	return 0;
}

void get1(char * p[limit], char array1[lon], int length)
{
	// ��������ȶ�̬����һ�������뵥��һ�����ȵĿռ䡣
	// �ٰ���ʱchar��������ݸ�ֵ����̬����Ŀռ䡣
	// ����ָ�����鴢���ǿ�ռ䡣

	extern int times;
	extern int limit;

	char * temp = (char *) malloc( length * sizeof(char) );

	for(int i = 0; i <= length; i++)
	{
		temp[i] = array1[i];  //���浥�ʵ���̬����char����
	}

	printf("\nThe %d local is %p .\n", times, &p[times]);    //�����������������ַ

	p[times] = temp;  //�ٴα��浥��

	times++;            //����dime
    free(temp);
}
