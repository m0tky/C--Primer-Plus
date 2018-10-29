#include <iostream>
int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	
	//这里的情况的cin通过空格 制表符 换行符确定字符串的结束位置  自动在 数组结尾添加空字符 
	
	cout << "Enter your name:\n";
	cin >> name ;  			
	//这里可用cin.getline(name,ArSize)  输入行 
	//--->这个只会在读取到指定数目和换行符时才会停止 不会保存换行符 存储字符串时用空字符代替换行符
	
	//还有通过 cin.get()解决    get不读取也不丢弃换行符 而是将他留在输入队列中见4.5cpp 
	
	 
	cout << "Enter your favorite dessert: \n";
	cin >> dessert ;
	cout << "I have some delicious dessert " << dessert << endl;
	cout << "for you," << name << ".\n" ;
	
	return 0;
} 
