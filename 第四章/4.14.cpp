/*--------------------------*
 *-------            -------*
 *-------  ָ��ʹ��  -------*
 *-------            -------*
 *--------------------------*/
 //ʹ�ó������ʱ��ֵ��ָ���� ����ַ�������� 
// ����洢����ʱ�Ĳ����෴�� ����ַ��Ϊָ��������ֵΪ������ 
 
 //OOP ǿ�������н׶Σ������Ǳ���׶� ���Ǻʹ�ͳ������̵����� �ṩ������ԣ�  
 //ָ���ǻ����������͵� 
 //��ʹ��ָ��ʱ��Ҫע�����ȳ�ʼ��ָ�� 

#include <iostream>
int main(){
	using namespace std;
	int dounts = 6;
	double cups = 4.5;
	int updates = 7;
	
	int * p_updates;
    //p_updates ��ָ��int����  ��p_updates������ָ��int��ָ�� 
	// int *ptr;  int * ptr;  int*ptr; int* ptr;  int* p1, p2;���ǿ��Ե�
	//int* ��һ������(��������) ------- ָ��int��ָ��  
	p_updates = &updates;
	
	int * pt ;
	pt = (int *) 0xB8000000;//ǿ������ת����ֵ��ָ�� 
	
	/* ע������ ��Ȼ������û�б��� Ҳû�о��浫�ǳ�������
	����Ҫ��ȷ���ȳ�ʼ��ָ�� 
	long * follow;
	*follow = 2333;
	cout << follow;
	cout << *follow;
	*/
	
	cout << &dounts << endl;
	cout << &cups << endl;
// 	cout << &cups - &dounts << endl;
//  ���ﲻ�����Ҽ�.... ��Ϊ���ǲ���int�Ͷ���int* 
	cout << "updates : " << updates << endl
		 << "&updates : " << &updates << endl
		 << "p_updates : " << p_updates << endl
		 << "*p_updates : " << * p_updates << endl;
		 //<---ע��*p_updates ��* p_updates û������ 
	//cout << pt << *pt << endl;  
	 

	 return 0;
} 
