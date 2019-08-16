/*C语言屏幕取色源码*/
#include<Windows.h>  
#include<stdio.h> 
 
int main()  
{  
   
    LONG zx = -1;  
    LONG zy = -1;  
   
        
   HMODULE hModule = NULL;
   typedef COLORREF (*Func)(HDC hdc, int a, int b);         //使用动态链接库要用的函数 
       
   
    hModule=LoadLibrary("gdi32.dll");                //加载动态链接库 
    POINT ptB = { 0, 0 };
    LPPOINT xy = &ptB;
    COLORREF cr;
     int  x = 5; 
     int  y = 5;
     HDC hdc = GetDC(NULL);
    Func fu = (Func)GetProcAddress(hModule, "GetPixel" );               //这是使用动态链接库gdi32.dll里面 的函数 GetPixel 
    
      while (1)  
    {                 
           
        GetCursorPos(xy);   //获取鼠标当前位置    
		    
        /*如果鼠标移动，（即当前的坐标改变则打印出坐标）打印出做坐标。  */ 
        if ((zx != xy->x) || (zy != xy->y))  
        {  
            cr = fu(hdc, xy->x, xy->y);     //获取鼠标位置的像素值信息
			 
            int a = GetRValue(cr);           //获取红色 
            int b = GetGValue(cr);           //获取绿色 
            int c = GetBValue(cr);           //获取蓝色
			 
            printf("x=%d,y=%d\n", xy->x, xy->y);           //打印鼠标位置   
			printf("rgba( %d, %d, %d)\n\n",a,b,c);           //打印rgb值 
            zx = xy->x;   
            zy = xy->y;  
        }             
    }   
    
    
     FreeLibrary(hModule);             //释放指针 
        
}

