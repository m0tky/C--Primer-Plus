/*--------------------------*
 *-------            -------*
 *------- new分配内存-------*
 *------- new动态数组-------*
 *--------------------------*/
 
 //type_name * pointer_name = new type_name [num_elements]; 
 //new 语句提供了识别内存中每个元素所需的全部信息 
 
 
 //在运行时分配未命名的内存以存储值 
 //typeName * pointer_name = new typeName 
 //地址本身只指出了对象存储地址的开始，而没有指出类型
 //new适用于大型数据对象 动态数组    ------>动态联编 
 
 
 /*
 new和变量分配的内存块不同
 变量的值都存储在栈的地方，而new从堆中分配的内存
 在C++中值为0的指针被称为空指针 ---- 常用来表示运算符或函数失败
 C++提供了检测并处理内存失败的工具 
 */ 
 
 
 /*
 不要使用delete释放不是new分配的内存
 不要释放俩次同一内存
 如果使用new [] 则应该使用delete[]释放    释放整个数组  
 不匹配释放结果不确定而且编译器不会报错== 
 对空指针使用是安全的 
 */ 
 
  
 
#include <iostream>
int main(){
	using namespace std;
	int nights = 1001;
	int * pt = new int;  
	//这里的new int 是告诉程序，需要适合存储int的内存  这里的pt指向一个数据对象 
	*pt = 1001;
	delete pt;  //不会删除指针，只会释放内存  对空指针使用delete是安全的 
	//delete 用于new分配的内存 并不意味着要使用用于new的指针而是使用于new的地址 
	//配对使用，不然容易发生内存泄漏（被分配的内存再也不能使用了） 
	//delete pt; 这里不要重复释放内存 编译器不会报错，但会出现不可预估的情况 
	
	int * psome = new int [10];//返回第一个元素地址 ---->赋给psome
	delete [] psome; 
	//释放整个数组 
	
	
	
	/*
	int * as = new int ;
	short * sd = new short [400];
	delete [] as;
	delete sd; 
	
	这里测试时虽然没有程序崩溃，但是很明显鼠标指针在转圈，所以要小心 
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
 	这样创建俩个指向同一内存块的指针 ，容易发生将同一内存块删除俩次的概率 容易使程序报错
	对于返回函数使用俩个指针是有意义的  
	*/
	
	return 0; 
	
}
