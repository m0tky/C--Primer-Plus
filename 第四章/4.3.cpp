#include <iostream>
int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	
	//����������cinͨ���ո� �Ʊ�� ���з�ȷ���ַ����Ľ���λ��  �Զ��� �����β��ӿ��ַ� 
	
	cout << "Enter your name:\n";
	cin >> name ;  			
	//�������cin.getline(name,ArSize)  ������ 
	//--->���ֻ���ڶ�ȡ��ָ����Ŀ�ͻ��з�ʱ�Ż�ֹͣ ���ᱣ�滻�з� �洢�ַ���ʱ�ÿ��ַ����滻�з�
	
	//����ͨ�� cin.get()���    get����ȡҲ���������з� ���ǽ���������������м�4.5cpp 
	
	 
	cout << "Enter your favorite dessert: \n";
	cin >> dessert ;
	cout << "I have some delicious dessert " << dessert << endl;
	cout << "for you," << name << ".\n" ;
	
	return 0;
} 
