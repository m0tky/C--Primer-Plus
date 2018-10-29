#include <iostream> 
#include <string>
int main(){
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";

	//创建一个长度为0的string对象 
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
	//charr1 = charr2;    <--- 这是不允许的
	str1 = str2; //  string字符可以这样赋值， 也可以+=
	str1 += str2; 
	//也可以这样子 
	str1+="sdfsf "
	
}
