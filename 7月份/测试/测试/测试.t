﻿变量 线程ID
//从这里开始执行
功能 执行()
    //从这里开始你的代码
结束
//启动_热键操作
功能 启动_热键()
    线程ID=线程开启("执行","")
结束

//终止热键操作
功能 终止_热键()
    线程关闭(线程ID)
结束



功能 按钮0_点击()

    变量 句柄,read
    //句柄=进程打开("C:\\Users\\lenovo\\Desktop\\小程序.exe")

    read=读4byte(3933476,#004A0280)
    调试输出(read)
    
结束
