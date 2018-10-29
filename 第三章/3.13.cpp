#include <iostream>
int main(){
	using namespace std;
	cout.setf(ios_base::fixed);
	float tree = 3;
	int guess(3.9832);
	
	//采取的是截断的方法，精度会损失很多 
	int debt = 7.2E12;
	double debt2 =7.2E12;
	short debt3 =7.2E12;
	cout << "tree = " << tree << endl
		 << "guess = " << guess << endl
		 << "debt = " << debt << endl
		 << "double debt2 = "<< debt2 << endl
		 << "short debt3 = " << debt3 << endl;
	return 0;
} 
