/*--------------------------*
 *-------            -------*
 *-------  指针使用  -------*
 *-------            -------*
 *--------------------------*/
 //使用常规变量时，值是指定量 而地址是派生量 
// 处理存储数据时的策略相反， 将地址作为指定量，而值为派生量 
 
 //OOP 强调是运行阶段，而不是编译阶段 这是和传统面向过程的区别。 提供了灵活性，  
 //指针是基于其他类型的 
 //在使用指针时，要注意首先初始化指针 

#include <iostream>
int main(){
	using namespace std;
	int dounts = 6;
	double cups = 4.5;
	int updates = 7;
	
	int * p_updates;
    //p_updates 是指向int类型  或p_updates类型是指向int的指针 
	// int *ptr;  int * ptr;  int*ptr; int* ptr;  int* p1, p2;都是可以的
	//int* 是一种类型(复合类型) ------- 指向int的指针  
	p_updates = &updates;
	
	int * pt ;
	pt = (int *) 0xB8000000;//强制类型转换赋值给指针 
	
	/* 注意这里 虽然编译器没有报错 也没有警告但是程序会崩溃
	所以要明确首先初始化指针 
	long * follow;
	*follow = 2333;
	cout << follow;
	cout << *follow;
	*/
	
	cout << &dounts << endl;
	cout << &cups << endl;
// 	cout << &cups - &dounts << endl;
//  这里不允许我减.... 因为他们不是int型而是int* 
	cout << "updates : " << updates << endl
		 << "&updates : " << &updates << endl
		 << "p_updates : " << p_updates << endl
		 << "*p_updates : " << * p_updates << endl;
		 //<---注意*p_updates 和* p_updates 没有区别 
	//cout << pt << *pt << endl;  
	 

	 return 0;
} 
