#include <iostream>
int main(){
	using namespace std;
	
	// ch ʵ�ʴ洢���ڴ��е���77  Ҳ����˵ʵ���������� 
	char ch ='M';
	int i = ch;  
	
	//77������i�н���ʾʱ�� �����ַ�7
	cout << "The ASCII code for " << ch << " is  " << i << endl; 

	 
	cout << "Add one to the character code :" << endl;
	
	//ʵ�ʼ��ϵ����ַ����� 
	ch +=1; 
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	cout << "using cout.put() ";
	cout.put(ch); 
	cout << '$'; 
	
	return 0;
} 
