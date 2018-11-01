#include <Windows.h>
#include <iostream>
#define BUF_SIZE 256
int main()
{
	                             //win对文件进行操作都是通过句柄
	HANDLE hFileRead;            // 句柄 ====  变量
	DWORD nIn;
	CHAR buffer[BUF_SIZE];
								 
								 //createfile =====>一个是创建文件，一个是打开文件的功能
	hFileRead = CreateFile
	("text.txt",
		GENERIC_READ,             //读
		FILE_SHARE_READ,          //共享读 
		NULL,                     //默认属性                 
		OPEN_EXISTING,            //打开一个文件
		FILE_ATTRIBUTE_NORMAL,    //设定一个文件属性，常规属性
		NULL                      //指定模板  
	);
	
	//通过函数检查打开是否出错  通过检查句柄是否有效
	if (hFileRead == INVALID_HANDLE_VALUE)
	{
		std::cout << "不能打开文件。" << GetLastError();  //获取错误信息
		system("pause");
		return -1;
	}

	//文件句柄 ， 读出的文件内容在这里缓存 ， 指定读多少个 ，  实际读了多少个 ，空没用到
	while (ReadFile(hFileRead, buffer, BUF_SIZE, &nIn, NULL) && nIn > 0) {
		std::cout << buffer;
		std::cout << nIn;
		system("pause");
	}

	CloseHandle(hFileRead);//关闭句柄
	
	std::cout << "hello" << "\n";
	system("pause");
	return 0;
}