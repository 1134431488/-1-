#include<stdio.h>
#include<windows.h>

int main(void)
{

	int pid;				//ָ�����ID��ַ��ָ�����
	long long int hwndB;			//����Ȩ�޵ľ��ֵ������ͨ�ľ�����ԡ�
	long long int hwnd = FindWindow(NULL, "С����");//S1:�ַ��� ���� S2:�ַ��� ���� ,����ֵ��8�ֽڵľ��
	if(hwnd != 0)
	{
		printf("�ɹ���ȡ���ھ��\n");
		GetWindowThreadProcessId(hwnd, &pid);//ָ��pidָ�����ID��ַ��*pid��ֵ���ǽ���IDֵ
		hwndB = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);//ͨ��pid��ȡһ�����з���Ȩ�޵ľ��
		puts("------------------------------------------------------------------------");
		printf("���ھ��:%lld\n����ID:%d\n����Ȩ�޾��:%d\n", hwnd, pid, hwndB);
		puts("------------------------------------------------------------------------");
		if(hwndB)//ֻҪhwndB��ֵ��Ϊ0��ΪNULL������������
		{
			int *value;//��Ҫ�޸ĵ�ʮ����ֵ����ָ��Ļ�ַ���и�ֵ�� 
			unsigned long long int *ads = 0x004A0280;//����16���ƵĻ�ַ(8�ֽ�)
			value = 0;//����ֵ
			WriteProcessMemory(hwndB, ads, &value, 4, NULL);
		}
	}
	else
		printf("��ȡ���ھ��ʧ��");

	return 0;
}
//	windows.h ��������
//	HWND hwnd; 		//8 ��C���Ե� unsigned long long int �������ʹ���
//	DWORD pid; 		//4 ��C���Ե� unsigned int �������ʹ���
//	HANDLE hwndB; 	//8 ��C���Ե� unsigned long long int �������ʹ���
//	DWORD value; 	//4 ��C���Ե� unsigned int �������ʹ���
//	LPVOID ads 		//8 ��C���Ե� unsigned long long int �������ʹ���
//	windows.h ���������ֽڴ�С
//	printf("HWND:%d\n", sizeof(HWND));	//8
//	printf("WORD:%d\n", sizeof(DWORD));	//4
//	printf("HANDLE:%d\n", sizeof(HANDLE));//8
//
//
//	printf("%d\n", sizeof(unsigned int));//4 ��DWORD ��Ӧ
//	printf("%d\n", sizeof(unsigned long int));//4
//	printf("%d\n", sizeof(unsigned long long int));//8 ��HWND �� HANDLE ��Ӧ
