
byte chessdata[10][18];
void CbaiwinllkDlg::OnBnClickedReadchessdata()
{
	
	//获取窗口句柄
	HWND gameh = ::FindWindow(NULL,"无标题-记事本");
	//获取窗口进程ID
	DWORD processid;
	::GetWindowThreadProcessId(gameh,&processid);
	//打开指定进程
	HANDLE processh=::OpenProcess(PROCESS_ALL_ACCESS,false,processid);
	//读取进程内存数据
	DWORD byread;
	DWORD tmp;
	LPCVOID pbase=(LPCVOID)0x4455C8;	//棋盘数据基址
	LPVOID nbuffer=(LPVOID)&chessdata;	//存放棋盘数据
	::ReadProcessMemory(processh,pbase,&tmp,4,&byread);
	::ReadProcessMemory(processh,(LPCVOID)(tmp+0x8),&tmp,4,&byread);
	::ReadProcessMemory(processh,(LPCVOID)(tmp+0x8),&tmp,4,&byread);
	::ReadProcessMemory(processh,(LPCVOID)(tmp+0xA0),nbuffer,10*18,&byread);
	//显示棋盘数据
	char buf[10];
	m_chessdata=_T("");
	for(int y=0;y<10;y++)
	{
		for(int x=0;x<18*4;x+=4)	//读一行
		{
			itoa(chessdata[y][x],buf,16);	//转换成字串
			m_chessdata+=buf;
			m_chessdata+=_T(" ");
		}
		//换行
		m_chessdata+="\r\n";
	}
	
	UpdateData(false);
}
