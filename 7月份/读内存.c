#include <stdio.h>
#include <windows.h>
int main (void)
{
	int hwnd;
	if (hwnd != IntPtr.Zero)
	{
		int calcID;
		int calcProcess;
		int dataAddress;
		int readByte;
		GetWindowThreadProcessId(NULL, "小程序");
		calcProcess = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE, false, calcID);
		//假设地址0X0047C9D4存在信息
		ReadProcessMemory(calcProcess, 0X004A0280, out dataAddress, 4, out readByte);
		MessageBox.Show(dataAddress.ToString());
	}
	else
	{
		MessageBox.Show("没有找到窗口");
	}
	return 0;
}

