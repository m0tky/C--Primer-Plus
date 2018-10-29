#include <iostream>
int main(){
	using namespace std;
	double * p1 = new double [3];
	//delete [] p1; 		---------->delete 放上面也会程序崩溃 
	
	/*
	int a = 1;
	delete a;
	注意这样是错的 
	*/
					
	p1[0] = 1;
	p1[1] = 2.2;
	p1[2] = 3.23;
	cout << "p1[1] is " << p1[1] << endl;
	
	double * b ;
	b = p1;
	cout << *b << endl;
	
	p1 +=1;
	cout << "Now p1[0] is " << p1[0] << " and "
		 << " p1[1] is " << p1[1] << endl;
	
	cout << "p1[2]" << p1[2] << endl;
	cout << "p1[7]" << p1[7] << endl;
	cout << "p1[9]" << p1[9] << endl; //为0   我不知道是空字符还是0	 和 下面*c 的情况一样 
	
	double * c ;
	c = &p1[2];
	
	double * a ;
	a = p1 ;  
	cout << "*a" << *a << endl;	//这里的是元素地址的值 
	
	cout << *b << endl; //这证明数组移动了但数值还是在哪个内存地址上啊 
	// ----------我感觉这里应该是变化的时间不长 加上这个程序简单，不知道在大的项目中这个会不会变 
	 
	cout << p1 << endl; //  这里的是元素地址 
	
	p1 = p1 - 1; //如果不复原delete时会出错 
	
	cout << *c << endl; 
	//让我感兴趣的是这里的*c居然不是p1[2]这个值  ----而且是在动态变化的，每次运行程序是都不同 
 	 
	
	delete [] p1;
	return 0;
}
