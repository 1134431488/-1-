
byte chessdata[10][18];
void CbaiwinllkDlg::OnBnClickedReadchessdata()
{
	
	//��ȡ���ھ��
	HWND gameh = ::FindWindow(NULL,"�ޱ���-���±�");
	//��ȡ���ڽ���ID
	DWORD processid;
	::GetWindowThreadProcessId(gameh,&processid);
	//��ָ������
	HANDLE processh=::OpenProcess(PROCESS_ALL_ACCESS,false,processid);
	//��ȡ�����ڴ�����
	DWORD byread;
	DWORD tmp;
	LPCVOID pbase=(LPCVOID)0x4455C8;	//�������ݻ�ַ
	LPVOID nbuffer=(LPVOID)&chessdata;	//�����������
	::ReadProcessMemory(processh,pbase,&tmp,4,&byread);
	::ReadProcessMemory(processh,(LPCVOID)(tmp+0x8),&tmp,4,&byread);
	::ReadProcessMemory(processh,(LPCVOID)(tmp+0x8),&tmp,4,&byread);
	::ReadProcessMemory(processh,(LPCVOID)(tmp+0xA0),nbuffer,10*18,&byread);
	//��ʾ��������
	char buf[10];
	m_chessdata=_T("");
	for(int y=0;y<10;y++)
	{
		for(int x=0;x<18*4;x+=4)	//��һ��
		{
			itoa(chessdata[y][x],buf,16);	//ת�����ִ�
			m_chessdata+=buf;
			m_chessdata+=_T(" ");
		}
		//����
		m_chessdata+="\r\n";
	}
	
	UpdateData(false);
}
