#include <iostream>

int main(){
	
	using namespace std;
	//cout.setf(ios_base::fixed, ios_base::floatfiedld);
	
	//防止程序把较大的数切换到E表示法 
	cout.setf(ios_base::fixed );
//	cout.setf(ios_base::floatfiedld);
	
	float tub = 10.0 / 3.0;
	double mint =10.0 / 3.0;
	const float million = 1.0e6;
	
	cout << "tub = " << tub << endl 
		 << "tub * million = " << tub * million << endl 
	     << "10 * tub * million = " << 10 * million * tub << endl
		 << "100 * tub * million = " << 100 * tub * million << endl
		 << "tub * million * 10 = " << tub * million * 10<< endl;
	cout << "mint = " << mint << endl 
		 << "mint * million = " << mint * million << endl;
	return 0;
	  
}
