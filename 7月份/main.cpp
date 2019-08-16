#include <windows.h>

LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam)
{
	static int  cxClient, cyClient ;
	static HPEN hPen1, hPen2, hPen3;
	HDC         hdc ;
	int         i ;
	PAINTSTRUCT ps ;
	switch(Message)
	{
		case WM_SIZE:
		{
			cxClient = LOWORD (lParam) ;
			cyClient = HIWORD (lParam) ;
			break;
		}
		case WM_PAINT:
		{
			InvalidateRect(hwnd, NULL, TRUE);
			hdc = BeginPaint (hwnd, &ps) ;
			hPen1 = CreatePen(PS_SOLID, 2, 0x0000ff);
			hPen2 = CreatePen(PS_SOLID, 4, 0xa0ff00);
			hPen3 = CreatePen(PS_DOT, 0, 0xff00ff);
			SelectObject(hdc, hPen1);
			MoveToEx (hdc, 0, cyClient/2, NULL) ;
			LineTo   (hdc, cxClient, cyClient/2) ;
			SelectObject(hdc, hPen2);
			Rectangle(hdc, 300, 200, 70, 80);
			SelectObject(hdc, hPen3);
			Ellipse(hdc, cxClient/4, cyClient/3, cxClient/4+cxClient/3, cyClient/3+cxClient/3);
			SelectObject(hdc, hPen1);
			RoundRect(hdc, 150, 160, 350, 250, 40, 20);
			DeleteObject(hPen1);
			DeleteObject(hPen2);
			DeleteObject(hPen3);

			break;
		}
		case WM_CLOSE:
		{
			DestroyWindow(hwnd);
			break;
		}
		case WM_DESTROY:
		{
			PostQuitMessage(0);
			break;
		}
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEX wc;
	HWND hwnd;
	MSG Msg;
	memset(&wc,0,sizeof(wc));
	wc.cbSize         = sizeof(WNDCLASSEX);
	wc.lpfnWndProc     = WndProc;
	wc.hInstance     = hInstance;
	wc.hCursor         = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm         = LoadIcon(NULL, IDI_APPLICATION);

	if(!RegisterClassEx(&wc))
	{
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Try graphics",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
	                      CW_USEDEFAULT,
	                      CW_USEDEFAULT,
	                      640,
	                      480,
	                      NULL,NULL,hInstance,NULL);
	if(hwnd == NULL)
	{
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}
	while(GetMessage(&Msg, NULL, 0, 0) > 0)
	{
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	}
	return Msg.wParam;
}
