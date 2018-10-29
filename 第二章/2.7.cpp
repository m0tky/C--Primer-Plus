#include <iostream>
#include <climits>
//#define INT_MAX 10000000
int main(){
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	int a = 2;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	//double n_double =DOUBLE_MAX ;
	
	cout <<"int is "<< sizeof (int)<<" bytes."<<endl;
	cout <<"a is " <<sizeof (a) << " bytes." << endl; 
	cout << "short is " << sizeof (short) << " bytes. " << endl;
	cout << "long is " << sizeof (long) << " bytes." <<endl;
 	cout << "long long is  " << sizeof (long long) <<" bytes." <<endl; 
 	//cout << "double is " << sizeof (double) << " bytes. "<<endl;
 	cout << "long double is " << sizeof (long double) << " bytes. "<<endl;
	
	
	
	
	cout << "Maximum values:"<<endl;
	cout <<"int:"<< n_int <<endl;
	cout <<"short :" << n_short << endl;
	cout << " long :" << n_long << endl;
	cout << " long long :"<< n_llong << endl;
	//cout << " double :" << n_double <<endl; 
	
	
	
	
	cout <<"Minimum int values=" <<INT_MIN << endl;
	cout << "Minimum short values= " << SHRT_MIN << endl;
	cout << "Bits per byte = " <<CHAR_BIT << endl; //×Ö½ÚÊý 
	
	 
	return 0;
	 
} 
