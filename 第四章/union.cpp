/*--------------------------*
 *-------            -------*
 *-------  ������    -------*
 *-------            -------*
 *--------------------------*/
   
  //���Դ洢��ͬ���� ֻ��ͬʱ�洢һ������ �䷨�ͽṹ���ƣ�����ȴ����ͬ
  //�������ͬʱʹ�� ���Խ�ʡ�ռ� 
union one4all
{
	int int_val;
	long long_val;
	double double_val;
 } ;
 
 struct widget
 {
 	char brand[20];
 	int type;
 	union                           
	//���������� ���Ա��λ����ͬ��ַ���ı�����ÿ��ֻ��һ����Ա�ǵ�ǰ��Ա 
 	{
 		long id_num;
 		char id_char[20];
 		
	 };
  } ;
 
#include <iostream>
int main(){
	using namespace std;
	one4all pail;
	pail.int_val = 15;
	cout <<  pail.int_val << endl;
	pail.double_val = 1.38;
	cout << pail.int_val << endl;  
	//<-----------�����int_val���ͷŵ���   ��֪�������������᲻�ᱨ�� 
	cout << pail.double_val << endl;
	cout << pail.long_val << endl;
	
	widget prize;
	prize.id_num = 111; 
	cout << prize.id_num <<endl;
	
	cont << "�����룺" <<endl;
	cin >> prize.type; 
	if (prize.type > 1)
	cin >> prize.id_num;
	else
	cin >> prize.id_num; 
	//<-----------�������÷� 
	
	return 0;
}

