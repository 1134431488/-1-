//����ͷ�ļ� 
#include <stdio.h>
#include <windows.h> 
void main(void)
{
	//ͨ�����������ȡ�ô��ھ���� 
	LPCWSTR LpClassName = NULL;//�������� 
	LPCWSTR LpWindowName = "С����";//���ڱ��� 
	HWND hWnd;//���
	DWORD lpdwProcessId;//����ID
	DWORD dwDesiredAccess = PROCESS_ALL_ACCESS;//Ȩ����� 
	WINBOOL binheritHandle = FALSE;//������� 
	HANDLE hProcess;//Ȩ�޾��
	LPCVOID lpBaseAddress = 0x004a0280;//��ַ 
	LPVOID lpBuffer = 999;//����ֵ
	hWnd = FindWindow(LpClassName, LpWindowName);
	printf("�����%d\n", hWnd);
	//ͨ�����ȡ�ý���ID�� 
	GetWindowThreadProcessId(hWnd, &lpdwProcessId);
	printf("ID��%d\n", lpdwProcessId);
	//ͨ������IDȡ��Ȩ�޾�� 
	hProcess = OpenProcess(dwDesiredAccess, binheritHandle, lpdwProcessId);
	printf("Ȩ�ޣ�%d\n", hProcess);
	printf("��ַ��%#x\n", lpBaseAddress);
	ReadProcessMemory(hProcess, lpBaseAddress, &lpBuffer, 8, NULL);//�������� 
	printf("���⣺%d\n", lpBuffer);
	puts("������Ҫ�޸ĵ�����ֵ:");
	scanf("%d", &lpBuffer);//�����û�Ҫд�������ֵ 
	WriteProcessMemory(hProcess, lpBaseAddress, &lpBuffer, 8, NULL);//д������ 
}

