#include <iostream>
int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.get(name,ArSize).get();
	//第二个 get()方法是为了处理换行符 ，
	//也可以拆开使用 cin.get()不带任何参数 意味着读取下一个字符
	//cin.get()检查错误更容易些 
	 
	cout << "Enter your favorite dessert: \n";
	//cin >> dessert ;
	cin.get(dessert,ArSize).get();
	cout << "I have some delicious dessert " << dessert << endl;
	cout << "for you," << name << ".\n" ;
	
	return 0;
} 
