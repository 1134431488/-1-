//调用头文件 
#include <stdio.h>
#include <windows.h> 
void main(void)
{
	//通过类名或标题取得窗口句柄： 
	LPCWSTR LpClassName = NULL;//窗口类名 
	LPCWSTR LpWindowName = "小程序";//窗口标题 
	HWND hWnd;//句柄
	DWORD lpdwProcessId;//进程ID
	DWORD dwDesiredAccess = PROCESS_ALL_ACCESS;//权限类别 
	WINBOOL binheritHandle = FALSE;//布尔类别 
	HANDLE hProcess;//权限句柄
	LPCVOID lpBaseAddress = 0x004a0280;//基址 
	LPVOID lpBuffer = 999;//阳光值
	hWnd = FindWindow(LpClassName, LpWindowName);
	printf("句柄：%d\n", hWnd);
	//通过句柄取得进程ID： 
	GetWindowThreadProcessId(hWnd, &lpdwProcessId);
	printf("ID：%d\n", lpdwProcessId);
	//通过进程ID取得权限句柄 
	hProcess = OpenProcess(dwDesiredAccess, binheritHandle, lpdwProcessId);
	printf("权限：%d\n", hProcess);
	printf("基址：%#x\n", lpBaseAddress);
	ReadProcessMemory(hProcess, lpBaseAddress, &lpBuffer, 8, NULL);//读出阳光 
	printf("阳光：%d\n", lpBuffer);
	puts("请输入要修改的阳光值:");
	scanf("%d", &lpBuffer);//接收用户要写入的阳光值 
	WriteProcessMemory(hProcess, lpBaseAddress, &lpBuffer, 8, NULL);//写入阳光 
}

