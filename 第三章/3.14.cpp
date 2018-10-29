#include <iostream>
int main(){
	using namespace std;
	int auks, bats, coots;
	
	auks = 19.99 + 11.99;
	
	bats = (int) 19.99 + (int) 11.99; 			//Old C syntax
	coots = int (19.99) + int (11.99);			//new C++ syntax
	cout << "auks = " << auks << endl			 
		 << "bats = " << bats << endl			// 强制类型转换
		 << "coots = " << coots << endl;		// 强制类型转换
	
	char ch = 'Z';
	cout << "The code " << ch << "is " << int (ch) << endl;
	cout << "Yes code is " << static_cast<int>(ch) <<endl;
	return 0;
	
	
	
	
}
