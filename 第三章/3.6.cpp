#include <iostream>
int main(){
	using namespace std;
	
	// ch 实际存储在内存中的是77  也就是说实际上是整数 
	char ch ='M';
	int i = ch;  
	
	//77储存在i中将显示时是 两个字符7
	cout << "The ASCII code for " << ch << " is  " << i << endl; 

	 
	cout << "Add one to the character code :" << endl;
	
	//实际加上的是字符编码 
	ch +=1; 
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	cout << "using cout.put() ";
	cout.put(ch); 
	cout << '$'; 
	
	return 0;
} 
