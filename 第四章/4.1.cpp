#include <iostream>
int main(){
	using namespace std;
	int  arr[5] = {1,7,2,3,};   //剩下的元素置为0
	int brr[5];                 //未初始化的为之前在此内存单元的值 
	
	//全部初始化为0 
	int crr[5] = {0};  //可省略 = 和 0 效果一样
	//注意禁止缩窄   
	 
	//第一个元素为1 其他为0 
	int drr[5] = {1};
	
	int err[] = {2,3,4,5};
	int num_elements = sizeof err / sizeof (int);		//看具体情况 
	cout << "数组err[]的元素数：" << num_elements <<endl;	
	
	//int arr = 2; //只能遍历数组
	cout << "数组内存地址：" << arr << endl;
	
	cout << "arr[2]:" << arr[2] << endl;
	cout << "arr[5]:" << arr[5] << endl;
	cout << "brr[]:" << brr[4] << endl;
			 
	cout << "arr[] 长度：" << sizeof arr << " bytes" << endl
		 << "arr[2] 长度：" << sizeof arr[2] <<" bytes" << endl;
 	return 0; 
		
} 
