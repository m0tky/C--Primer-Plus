#include <iostream>
#include <string>
#include <cstring>
int main(){
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar"; 
	//����Ҫ�ر���ҪĿ�����鳤�� ���������������ڴ棬���³�����ֹ ��������У��������� 
	 
	string str1;
	string str2 = "panther";
		
	
	str1 = str2;
	strcpy(charr1,charr2);   	//���� ��ֵ 
	cout << str1 << " ������str2��ֵ��str1 \n";
	
	str1 += " add";
	strcat(charr1,"add");   //�����ַ���
	
	//���� �ַ������ַ��� 
	int len1 = str1.size() ;
	int len2 = strlen(charr1);
	
	cout << str1 << " str1�ַ��� : " << len1 << endl;
	cout << "charr1 �ַ��� �� "  << len2 << endl;
	
	//�������rawԭʼ�ַ��� 
	cout << R"(sdfsdsf'""'sdf\n)" << endl;//����ģ���������\n�����ü���ת���\
	//R"+*(  ����R�к��У��� �������  )+*" 
	
	string str3;
	char charr3[20];
	cout << "δ��ʼ��charr[20]���ַ����� " << strlen(charr3) << endl;
	//�ӵ�һ�������������ַ�Ϊֹ������δ��ʼ��������������� 
	
	cin.getline(charr3,20);//�������������鳤�ȱ��ⳬԽ���飻�����෽�� 
	getline(cin,str3);  //���ﲻ���෽��  cinΪ����
	 
	  
	
	return 0;
	 
	
}
