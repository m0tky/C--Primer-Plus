#include <iostream>
int main(){
	
	using namespace std;

	cout.setf(ios_base::fixed );
	
	
	//��20λʱ��ʼ��ʧ���� 
	long double a = 2.34E+18;
	long double b = a + 1;
	
	//floatֻ��֤6λ 
	float c =  2.34E+19 ;
	float d = c + 1.0f;
	
	//��16λʱ��ʼ��ʧ���� 
	double e = 2.34E+15 ;
	double f = e + 1.0f;
	
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl; 
	cout << "b - a = " << b - a << endl;
	
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "d - c = " << d - c << endl;
	
	cout << "e = " << e << endl
		 << "f = " << f << endl
		 << "f - e = " << f - e << endl;
	
	return 0;
	
}
