#include<stdio.h>
#include<windows.h>

int main(void)
{

	int pid;				//指向进程ID地址的指针变量
	long long int hwndB;			//具有权限的句柄值，和普通的句柄不对。
	long long int hwnd = FindWindow(NULL, "小程序");//S1:字符串 类名 S2:字符串 标题 ,返回值：8字节的句柄
	if(hwnd != 0)
	{
		printf("成功获取窗口句柄\n");
		GetWindowThreadProcessId(hwnd, &pid);//指针pid指向进程ID地址，*pid的值就是进程ID值
		hwndB = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);//通过pid获取一个带有访问权限的句柄
		puts("------------------------------------------------------------------------");
		printf("窗口句柄:%lld\n进程ID:%d\n具有权限句柄:%d\n", hwnd, pid, hwndB);
		puts("------------------------------------------------------------------------");
		if(hwndB)//只要hwndB的值不为0或不为NULL，则条件成立
		{
			int *value;//你要修改的十进制值，对指向的基址进行赋值。 
			unsigned long long int *ads = 0x004A0280;//保存16进制的基址(8字节)
			value = 0;//阳光值
			WriteProcessMemory(hwndB, ads, &value, 4, NULL);
		}
	}
	else
		printf("获取窗口句柄失败");

	return 0;
}
//	windows.h 数据类型
//	HWND hwnd; 		//8 用C语言的 unsigned long long int 数据类型代替
//	DWORD pid; 		//4 用C语言的 unsigned int 数据类型代替
//	HANDLE hwndB; 	//8 用C语言的 unsigned long long int 数据类型代替
//	DWORD value; 	//4 用C语言的 unsigned int 数据类型代替
//	LPVOID ads 		//8 用C语言的 unsigned long long int 数据类型代替
//	windows.h 数据类型字节大小
//	printf("HWND:%d\n", sizeof(HWND));	//8
//	printf("WORD:%d\n", sizeof(DWORD));	//4
//	printf("HANDLE:%d\n", sizeof(HANDLE));//8
//
//
//	printf("%d\n", sizeof(unsigned int));//4 与DWORD 对应
//	printf("%d\n", sizeof(unsigned long int));//4
//	printf("%d\n", sizeof(unsigned long long int));//8 与HWND 和 HANDLE 对应
