/*--------------------------*
 *-------            -------*
 *-------  ö��ʹ��  -------*
 *-------            -------*
 *--------------------------*/
 
 
 //�������ų���    �������const	Ҳ������������
 //�����ϸ�  ö�ٳ�����������س��������������ͣ���switch����� 
//ѡ����ٿռ�洢��������������ȡֵ��ΧС�� ʹ��һ���ֽ� ����� ����long���͵�ʹ��4���ֽ� 
  
#include <iostream>

enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet,test}; 
//��Ӧ0--7   Ҳ����ʾ����

//enum {red, orange, yellow, green, blue, violet, indigo, ultraviolet }; 
//<----������������ö��������  ����ö�����ͱ���

enum bits{one = 12,two = 2, four = 4, eight = 8};
//��ʾ����ö���� ֻ��Ϊ����
//ע�������oneΪ12 ������ı�12С�ǿ��Ե� 

//bits myflag;
//myflag = bits(4);  // ȥ���������  ���ǿ��Ե��ڷ�Χ֮�� 
//ö�ٵ�ȡֵ��Χ������������С2����-1  ��Сֵ�������С��0 �����0 

enum bigstep{first, second = 200 ,third}; 
 //�����firstΪĬ��ֵ0  thirdΪ201
 
enum {zero, null = 0 ,one1, numero_uno = 1};
//������ͬö��ֵ ע�ⲻ��Ϊone ������ö�����ظ� 

//C++primer ��֪�����Ϊʲô��˵������C++�汾���Ը�ֵlong ����long long  û������������Ա��������� 

int main(){
	using namespace std;
	spectrum band;
	band = orange;
//	++band;
//	band = orange + red;
//	band +=1;	
//	band = 2;   //int �Ͳ����Զ�ת��Ϊ ö����  

	spectrum cand;
	cand = ultraviolet;
//	cand = cand + 1;   // ��һ���������ǲ������  ���ϸ����� 
	
	spectrum dand;
	dand = test; //ö����Ŀ���Զ�� 
	
	spectrum eand;

	spectrum fand;

	int color = blue; // ö���� ����ת��Ϊint �� 
	
	color = 3 + yellow;  //��������� ��תΪ��int�� 
	
	//eand = red + yellow; 
	//<-----------�����enumerator����ǲ������  
	//û��ר�ŵ�Ϊö�ٶ���������+  
	//��ʱתΪ��int����ӵ��� int�Ͳ��ܸ�ֵ��enum�� 
	
	fand = spectrum(3);
	fand = spectrum(9099999999999);
	//<----------�������ֵĽ����ȷ�� �������Ҳ�������Σ� 
	
	bits myflag;
	myflag = bits(4); 
		
	cout << band << endl;
	cout << cand << endl;
	cout << dand << endl;
	cout << color << endl;
//	cout << eand << endl;
	cout << fand << endl;
}
