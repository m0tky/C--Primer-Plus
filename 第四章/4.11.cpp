#include <iostream>

//ͨ���ṹ����Ӧ���ⲿ����
// C++���ᳫ�ⲿ�������� ���ᳫ�ⲿ�����ṹ
 
struct inflatable
{
	char name[20];
	float volume;
	double price;
};


struct test
{
	std::string name;    //<-----֧��string���� 
	float volume;
	double price;	
} ;

//Ҳ����ͬʱ����ʹ����ṹ����
struct perks
{
	int key_number;
	char car[12];
 } mr_smith, ms_jones;
 
 
 /*
 struct perks
 {
 	int key_number;
 	char car[12;]
 }mr_glitz =
 {
 	7,
	"Packard"
 };
<----------���ֲ���������Ϊ����������������Ŀ���            */
struct perks2 
 {
 	int key_number;
 	char car[12]; 
 }mr_glitz =
 {
 	7,
	"Packard"
 };
 
 
 //���ֵ�û���������� û�������ṹ����ֻ�����������������һ���� 
 struct 
 {
 	int key_number;
 	char car[12]; 
 }mr_z ;

int main(){
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99	
	};
	
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99	
	};
	
	// �����Ľṹ��ֵ����ʹ��Ա�������� 
	inflatable choice;
	choice = pal;
 
	
	
	
	
	
	//Ҳ������������
	inflatable duck = {"Daphne", 0.12, 9.98};
	//intfatable duck2 {"Ddfdsaphne", 0.12, 9.98};	
	//һ������   �еı��������У��һ�������ʵʵ�Ĵ�= 
	//intfatable duck3 {};     					
	//������Ա������ 
	
	
	
	
	cout << "Expand your guest list with "	<< guest.name;
	cout << " and " << pal.name << "\n";
	cout << "You can have both for $ ";
	cout << guest.price + pal.price <<endl;
	cout << "pal.name :" << pal.name << " choice.name :" << choice.name << endl;
	
	
	
	return 0;
} 
