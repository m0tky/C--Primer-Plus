#include <iostream>
int main(){
	using namespace std;
	double * p1 = new double [3];
	//delete [] p1; 		---------->delete ������Ҳ�������� 
	
	/*
	int a = 1;
	delete a;
	ע�������Ǵ�� 
	*/
					
	p1[0] = 1;
	p1[1] = 2.2;
	p1[2] = 3.23;
	cout << "p1[1] is " << p1[1] << endl;
	
	double * b ;
	b = p1;
	cout << *b << endl;
	
	p1 +=1;
	cout << "Now p1[0] is " << p1[0] << " and "
		 << " p1[1] is " << p1[1] << endl;
	
	cout << "p1[2]" << p1[2] << endl;
	cout << "p1[7]" << p1[7] << endl;
	cout << "p1[9]" << p1[9] << endl; //Ϊ0   �Ҳ�֪���ǿ��ַ�����0	 �� ����*c �����һ�� 
	
	double * c ;
	c = &p1[2];
	
	double * a ;
	a = p1 ;  
	cout << "*a" << *a << endl;	//�������Ԫ�ص�ַ��ֵ 
	
	cout << *b << endl; //��֤�������ƶ��˵���ֵ�������ĸ��ڴ��ַ�ϰ� 
	// ----------�Ҹо�����Ӧ���Ǳ仯��ʱ�䲻�� �����������򵥣���֪���ڴ����Ŀ������᲻��� 
	 
	cout << p1 << endl; //  �������Ԫ�ص�ַ 
	
	p1 = p1 - 1; //�������ԭdeleteʱ����� 
	
	cout << *c << endl; 
	//���Ҹ���Ȥ���������*c��Ȼ����p1[2]���ֵ  ----�������ڶ�̬�仯�ģ�ÿ�����г����Ƕ���ͬ 
 	 
	
	delete [] p1;
	return 0;
}
