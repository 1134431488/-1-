#include <windows.h>

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nShowCmd
)
{
	MessageBox(0, "hello", "world", MB_OK);
	return 0;
}

