#include <windows.h>

/*这是窗口的所有输入都指向的地方*/
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam)
{
	switch(Message)
	{

			/*销毁后，告诉主线程停止*/
		case WM_DESTROY:
		{
			PostQuitMessage(0);
			break;
		}

		/*所有其他消息(很多)都使用默认过程处理*/
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* Win32 GUI程序的'main'函数:这是执行开始的地方*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEX wc; /*我们窗口的属性结构*/
	HWND hwnd; /*一个“句柄”，因此是H，或者指向我们窗口的指针*/
	MSG msg; /*所有消息的临时位置*/

	/*将结构归零，然后设置我们要修改的东西*/
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);

	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc))
	{
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
	                      CW_USEDEFAULT, /* x */
	                      CW_USEDEFAULT, /* y */
	                      640, /* width */
	                      480, /* height */
	                      NULL,NULL,hInstance,NULL);

	if(hwnd == NULL)
	{
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0)   /* If no error is received... */
	{
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}
