#include <stdio.h>
#include <windows.h>
int main(void)
{
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_OK));//确定 
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_OKCANCEL));//确定 取消 
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_ABORTRETRYIGNORE));//中止 重试 忽略 
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_YESNOCANCEL));//是 否 取消 
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_YESNO));//是 否 
	
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_RETRYCANCEL));//重试 取消 
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_CANCELTRYCONTINUE));//取消 重试 继续 
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_ICONHAND));//错误图标 确定 
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_ICONQUESTION));//询问图标 确定 
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_ICONEXCLAMATION));//感叹号 确定 
	
	printf("弹窗返回值:%d\n", MessageBox(0,"内容","窗口标题",MB_ICONASTERISK));//感叹号 确定 

		
	return 0;
 } 
