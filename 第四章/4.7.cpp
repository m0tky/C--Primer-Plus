#include <iostream> 
#include <string>
int main(){
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";

	//����һ������Ϊ0��string���� 
	string str1;
	string str2 = "panther";
	
	cout << "Enter a kind of feline:";
	cin >> charr1;
	cout << "Enter another kinf of feline:";
	cin >>  str1;
	cout << "Here are some feline:\n";
	cout << charr1 << " " << charr2 << endl;
	cout << str1 << " " << str2 << endl; 
	cout << "str1[3] is " << str1[3];
	//charr1 = charr2;    <--- ���ǲ������
	str1 = str2; //  string�ַ�����������ֵ�� Ҳ����+=
	str1 += str2; 
	//Ҳ���������� 
	str1+="sdfsf "
	
}
