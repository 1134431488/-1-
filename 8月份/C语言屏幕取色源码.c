/*C������ĻȡɫԴ��*/
#include<Windows.h>  
#include<stdio.h> 
 
int main()  
{  
   
    LONG zx = -1;  
    LONG zy = -1;  
   
        
   HMODULE hModule = NULL;
   typedef COLORREF (*Func)(HDC hdc, int a, int b);         //ʹ�ö�̬���ӿ�Ҫ�õĺ��� 
       
   
    hModule=LoadLibrary("gdi32.dll");                //���ض�̬���ӿ� 
    POINT ptB = { 0, 0 };
    LPPOINT xy = &ptB;
    COLORREF cr;
     int  x = 5; 
     int  y = 5;
     HDC hdc = GetDC(NULL);
    Func fu = (Func)GetProcAddress(hModule, "GetPixel" );               //����ʹ�ö�̬���ӿ�gdi32.dll���� �ĺ��� GetPixel 
    
      while (1)  
    {                 
           
        GetCursorPos(xy);   //��ȡ��굱ǰλ��    
		    
        /*�������ƶ���������ǰ������ı����ӡ�����꣩��ӡ�������ꡣ  */ 
        if ((zx != xy->x) || (zy != xy->y))  
        {  
            cr = fu(hdc, xy->x, xy->y);     //��ȡ���λ�õ�����ֵ��Ϣ
			 
            int a = GetRValue(cr);           //��ȡ��ɫ 
            int b = GetGValue(cr);           //��ȡ��ɫ 
            int c = GetBValue(cr);           //��ȡ��ɫ
			 
            printf("x=%d,y=%d\n", xy->x, xy->y);           //��ӡ���λ��   
			printf("rgba( %d, %d, %d)\n\n",a,b,c);           //��ӡrgbֵ 
            zx = xy->x;   
            zy = xy->y;  
        }             
    }   
    
    
     FreeLibrary(hModule);             //�ͷ�ָ�� 
        
}

