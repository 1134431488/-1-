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
		GetWindowThreadProcessId(NULL, "С����");
		calcProcess = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE, false, calcID);
		//�����ַ0X0047C9D4������Ϣ
		ReadProcessMemory(calcProcess, 0X004A0280, out dataAddress, 4, out readByte);
		MessageBox.Show(dataAddress.ToString());
	}
	else
	{
		MessageBox.Show("û���ҵ�����");
	}
	return 0;
}

