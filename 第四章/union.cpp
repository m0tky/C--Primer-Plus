/*--------------------------*
 *-------            -------*
 *-------  共用体    -------*
 *-------            -------*
 *--------------------------*/
   
  //可以存储不同类型 只能同时存储一种类型 句法和结构相似，含义却不相同
  //数据项不会同时使用 所以节省空间 
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
	//匿名共用体 其成员将位于相同地址处的变量，每次只有一个成员是当前成员 
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
	//<-----------这里的int_val是释放掉的   不知道其他编译器会不会报错 
	cout << pail.double_val << endl;
	cout << pail.long_val << endl;
	
	widget prize;
	prize.id_num = 111; 
	cout << prize.id_num <<endl;
	
	cont << "请输入：" <<endl;
	cin >> prize.type; 
	if (prize.type > 1)
	cin >> prize.id_num;
	else
	cin >> prize.id_num; 
	//<-----------这是种用法 
	
	return 0;
}

