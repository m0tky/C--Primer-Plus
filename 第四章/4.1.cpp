#include <iostream>
int main(){
	using namespace std;
	int  arr[5] = {1,7,2,3,};   //ʣ�µ�Ԫ����Ϊ0
	int brr[5];                 //δ��ʼ����Ϊ֮ǰ�ڴ��ڴ浥Ԫ��ֵ 
	
	//ȫ����ʼ��Ϊ0 
	int crr[5] = {0};  //��ʡ�� = �� 0 Ч��һ��
	//ע���ֹ��խ   
	 
	//��һ��Ԫ��Ϊ1 ����Ϊ0 
	int drr[5] = {1};
	
	int err[] = {2,3,4,5};
	int num_elements = sizeof err / sizeof (int);		//��������� 
	cout << "����err[]��Ԫ������" << num_elements <<endl;	
	
	//int arr = 2; //ֻ�ܱ�������
	cout << "�����ڴ��ַ��" << arr << endl;
	
	cout << "arr[2]:" << arr[2] << endl;
	cout << "arr[5]:" << arr[5] << endl;
	cout << "brr[]:" << brr[4] << endl;
			 
	cout << "arr[] ���ȣ�" << sizeof arr << " bytes" << endl
		 << "arr[2] ���ȣ�" << sizeof arr[2] <<" bytes" << endl;
 	return 0; 
		
} 
