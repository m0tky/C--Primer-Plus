#include <iostream>
#include <cstring> 
int main(){
	using namespace std;
	const int size = 15;
	char name1[size];
	char name2[] = "C + +owboy";
	
	cout << "What's your name1 ?" << endl;
	cin >> name1;
	cout << "Your name1 is " << name1 << endl;
	cout << strlen(name1) << " is name1 ����" << endl;		
	//�������ַ����ĳ���  �������鱾��ĳ���
	
	cout << "in an array of " << sizeof(name1) << "bytes. \n" ;
	cout << name1[8] << endl;
	
	name2 [5] = '\0';		//���ַ�����Ϊ0�ֽ�   ���ַ������ֱ�ӽ�ȥ 
	cout << name2 << name2[1] << endl;
	
	//ע��name2[7]��ֵ  �������Ŀո�ĳ��� ˵���ո���ռ�ֽڵ� ���ǿ��ַ� 
	cout << strlen(name2) << endl << name2[7] << endl;
	
	return 0;
	
} 
