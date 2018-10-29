#include <iostream>

//通常结构声明应在外部声明
// C++不提倡外部声明变量 但提倡外部声明结构
 
struct inflatable
{
	char name[20];
	float volume;
	double price;
};


struct test
{
	std::string name;    //<-----支持string对象 
	float volume;
	double price;	
} ;

//也可以同时定义和创建结构变量
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
<----------这种不允许是因为定义了俩个，下面的可以            */
struct perks2 
 {
 	int key_number;
 	char car[12]; 
 }mr_glitz =
 {
 	7,
	"Packard"
 };
 
 
 //这种的没有类型名称 没法创建结构变量只能下面的这样创建了一次用 
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
	
	// 这样的结构赋值，即使成员中有数组 
	inflatable choice;
	choice = pal;
 
	
	
	
	
	
	//也可以这样声明
	inflatable duck = {"Daphne", 0.12, 9.98};
	//intfatable duck2 {"Ddfdsaphne", 0.12, 9.98};	
	//一样可以   有的编译器不行，我还是老老实实的打= 
	//intfatable duck3 {};     					
	//各个成员都置零 
	
	
	
	
	cout << "Expand your guest list with "	<< guest.name;
	cout << " and " << pal.name << "\n";
	cout << "You can have both for $ ";
	cout << guest.price + pal.price <<endl;
	cout << "pal.name :" << pal.name << " choice.name :" << choice.name << endl;
	
	
	
	return 0;
} 
