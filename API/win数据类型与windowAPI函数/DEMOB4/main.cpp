#include <Windows.h>
#include <iostream>
#define BUF_SIZE 256
int main()
{
	                             //win���ļ����в�������ͨ�����
	HANDLE hFileRead;            // ��� ====  ����
	DWORD nIn;
	CHAR buffer[BUF_SIZE];
								 
								 //createfile =====>һ���Ǵ����ļ���һ���Ǵ��ļ��Ĺ���
	hFileRead = CreateFile
	("text.txt",
		GENERIC_READ,             //��
		FILE_SHARE_READ,          //����� 
		NULL,                     //Ĭ������                 
		OPEN_EXISTING,            //��һ���ļ�
		FILE_ATTRIBUTE_NORMAL,    //�趨һ���ļ����ԣ���������
		NULL                      //ָ��ģ��  
	);
	
	//ͨ�����������Ƿ����  ͨ��������Ƿ���Ч
	if (hFileRead == INVALID_HANDLE_VALUE)
	{
		std::cout << "���ܴ��ļ���" << GetLastError();  //��ȡ������Ϣ
		system("pause");
		return -1;
	}

	//�ļ���� �� �������ļ����������ﻺ�� �� ָ�������ٸ� ��  ʵ�ʶ��˶��ٸ� ����û�õ�
	while (ReadFile(hFileRead, buffer, BUF_SIZE, &nIn, NULL) && nIn > 0) {
		std::cout << buffer;
		std::cout << nIn;
		system("pause");
	}

	CloseHandle(hFileRead);//�رվ��
	
	std::cout << "hello" << "\n";
	system("pause");
	return 0;
}