/*--------------------------*
 *-------            -------*
 *-------  枚举使用  -------*
 *-------            -------*
 *--------------------------*/
 
 
 //创建符号常量    可以替代const	也允许定义新类型
 //规则严格  枚举常用来定义相关常量而不是新类型，如switch语句中 
//选择多少空间存储看编译器，对于取值范围小的 使用一个字节 或更少 对于long类型的使用4个字节 
  
#include <iostream>

enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet,test}; 
//对应0--7   也可显示覆盖

//enum {red, orange, yellow, green, blue, violet, indigo, ultraviolet }; 
//<----上面这样不给枚举类型名  则不是枚举类型变量

enum bits{one = 12,two = 2, four = 4, eight = 8};
//显示设置枚举量 只能为整数
//注意上面的one为12 而后面的比12小是可以的 

//bits myflag;
//myflag = bits(4);  // 去函数里测试  这是可以的在范围之类 
//枚举的取值范围比最大数大的最小2的幂-1  最小值，如果不小于0 则就是0 

enum bigstep{first, second = 200 ,third}; 
 //这里的first为默认值0  third为201
 
enum {zero, null = 0 ,one1, numero_uno = 1};
//可以相同枚举值 注意不能为one 和上面枚举名重复 

//C++primer 不知道最后为什么又说后来的C++版本可以赋值long 或者long long  没有限制这里测试编译器不行 

int main(){
	using namespace std;
	spectrum band;
	band = orange;
//	++band;
//	band = orange + red;
//	band +=1;	
//	band = 2;   //int 型不能自动转换为 枚举型  

	spectrum cand;
	cand = ultraviolet;
//	cand = cand + 1;   // 加一跳到后面是不允许的  有严格限制 
	
	spectrum dand;
	dand = test; //枚举数目可以多个 
	
	spectrum eand;

	spectrum fand;

	int color = blue; // 枚举型 可以转化为int 型 
	
	color = 3 + yellow;  //这是允许的 都转为了int型 
	
	//eand = red + yellow; 
	//<-----------上面的enumerator相加是不允许的  
	//没有专门的为枚举定义的运算符+  
	//此时转为了int数相加但是 int型不能赋值给enum型 
	
	fand = spectrum(3);
	fand = spectrum(9099999999999);
	//<----------上面这种的结果不确定 不会出错，也不能信任； 
	
	bits myflag;
	myflag = bits(4); 
		
	cout << band << endl;
	cout << cand << endl;
	cout << dand << endl;
	cout << color << endl;
//	cout << eand << endl;
	cout << fand << endl;
}
