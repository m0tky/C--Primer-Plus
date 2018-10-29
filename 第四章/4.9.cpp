#include <iostream>
#include <string>
#include <cstring>
int main(){
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar"; 
	//这种要特别主要目标数组长度 超过将覆盖相邻内存，导致程序终止 或可以运行，但数据损坏 
	 
	string str1;
	string str2 = "panther";
		
	
	str1 = str2;
	strcpy(charr1,charr2);   	//复制 赋值 
	cout << str1 << " 这里是str2赋值给str1 \n";
	
	str1 += " add";
	strcat(charr1,"add");   //附加字符串
	
	//长度 字符串中字符数 
	int len1 = str1.size() ;
	int len2 = strlen(charr1);
	
	cout << str1 << " str1字符数 : " << len1 << endl;
	cout << "charr1 字符数 ： "  << len2 << endl;
	
	//这里的是raw原始字符串 
	cout << R"(sdfsdsf'""'sdf\n)" << endl;//这里的：：‘“和\n都不用加上转义符\
	//R"+*(  处理R中含有）” 这种情况  )+*" 
	
	string str3;
	char charr3[20];
	cout << "未初始化charr[20]的字符数： " << strlen(charr3) << endl;
	//从第一个计数遇到空字符为止，由于未初始化，所以随机出现 
	
	cin.getline(charr3,20);//这里设置了数组长度避免超越数组；这是类方法 
	getline(cin,str3);  //这里不是类方法  cin为参数
	 
	  
	
	return 0;
	 
	
}
