#include <iostream>
int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.get(name,ArSize).get();
	//�ڶ��� get()������Ϊ�˴����з� ��
	//Ҳ���Բ�ʹ�� cin.get()�����κβ��� ��ζ�Ŷ�ȡ��һ���ַ�
	//cin.get()�����������Щ 
	 
	cout << "Enter your favorite dessert: \n";
	//cin >> dessert ;
	cin.get(dessert,ArSize).get();
	cout << "I have some delicious dessert " << dessert << endl;
	cout << "for you," << name << ".\n" ;
	
	return 0;
} 
