/*--------------------------*
 *-------            -------*
 *------- new�����ڴ�-------*
 *------- new��̬����-------*
 *--------------------------*/
 
 //type_name * pointer_name = new type_name [num_elements]; 
 //new ����ṩ��ʶ���ڴ���ÿ��Ԫ�������ȫ����Ϣ 
 
 
 //������ʱ����δ�������ڴ��Դ洢ֵ 
 //typeName * pointer_name = new typeName 
 //��ַ����ָֻ���˶���洢��ַ�Ŀ�ʼ����û��ָ������
 //new�����ڴ������ݶ��� ��̬����    ------>��̬���� 
 
 
 /*
 new�ͱ���������ڴ�鲻ͬ
 ������ֵ���洢��ջ�ĵط�����new�Ӷ��з�����ڴ�
 ��C++��ֵΪ0��ָ�뱻��Ϊ��ָ�� ---- ��������ʾ���������ʧ��
 C++�ṩ�˼�Ⲣ�����ڴ�ʧ�ܵĹ��� 
 */ 
 
 
 /*
 ��Ҫʹ��delete�ͷŲ���new������ڴ�
 ��Ҫ�ͷ�����ͬһ�ڴ�
 ���ʹ��new [] ��Ӧ��ʹ��delete[]�ͷ�    �ͷ���������  
 ��ƥ���ͷŽ����ȷ�����ұ��������ᱨ��== 
 �Կ�ָ��ʹ���ǰ�ȫ�� 
 */ 
 
  
 
#include <iostream>
int main(){
	using namespace std;
	int nights = 1001;
	int * pt = new int;  
	//�����new int �Ǹ��߳�����Ҫ�ʺϴ洢int���ڴ�  �����ptָ��һ�����ݶ��� 
	*pt = 1001;
	delete pt;  //����ɾ��ָ�룬ֻ���ͷ��ڴ�  �Կ�ָ��ʹ��delete�ǰ�ȫ�� 
	//delete ����new������ڴ� ������ζ��Ҫʹ������new��ָ�����ʹ����new�ĵ�ַ 
	//���ʹ�ã���Ȼ���׷����ڴ�й©����������ڴ���Ҳ����ʹ���ˣ� 
	//delete pt; ���ﲻҪ�ظ��ͷ��ڴ� ���������ᱨ��������ֲ���Ԥ������� 
	
	int * psome = new int [10];//���ص�һ��Ԫ�ص�ַ ---->����psome
	delete [] psome; 
	//�ͷ��������� 
	
	
	
	/*
	int * as = new int ;
	short * sd = new short [400];
	delete [] as;
	delete sd; 
	
	�������ʱ��Ȼû�г�����������Ǻ��������ָ����תȦ������ҪС�� 
	*/
	cout <<  "night value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;
	
	double * pd = new double;
	*pd = 1000001.0;
	delete pd;
	
	cout << "double ";
	cout << "value = " << *pd  << ": location = " << pd << endl;
	cout << "location of pointer pd : " << &pd << endl;
	cout << "size of pt =  " << sizeof(pt);
	cout << "size of *pt =  " << sizeof(*pt);
	cout << "size of pd =  " << sizeof(pd);
	cout << "size of *pd =  " << sizeof(*pd);
	
	
	/*
	int * ps = new int ;
	int * pq = ps;
	delete ps; 
	delete pq;
 	������������ָ��ͬһ�ڴ���ָ�� �����׷�����ͬһ�ڴ��ɾ�����εĸ��� ����ʹ���򱨴�
	���ڷ��غ���ʹ������ָ�����������  
	*/
	
	return 0; 
	
}
