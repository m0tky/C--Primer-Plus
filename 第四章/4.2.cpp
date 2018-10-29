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
	cout << strlen(name1) << " is name1 长度" << endl;		
	//数组中字符串的长度  不是数组本身的长度
	
	cout << "in an array of " << sizeof(name1) << "bytes. \n" ;
	cout << name1[8] << endl;
	
	name2 [5] = '\0';		//空字符设置为0字节   空字符后面的直接截去 
	cout << name2 << name2[1] << endl;
	
	//注意name2[7]的值  这里计算的空格的长度 说明空格是占字节的 不是空字符 
	cout << strlen(name2) << endl << name2[7] << endl;
	
	return 0;
	
} 
