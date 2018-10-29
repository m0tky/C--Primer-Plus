/*--------------------------*
 *-------            -------*
 *-------  结构数组  -------*
 *-------            -------*
 *--------------------------*/

#include <iostream>
struct infatable
{
	char name[20];
	float volume;
	double price;
};

//常用于低级编程 
//位字段   指定占用特定位数 
struct torgle_register
{
	unsigner int SN : 4;
	unsigner int : 4;        //4 bits unused
	bool goodIn : 1;
	bool goodTorgle : 1;	
 };



int main()
{
	using namespace std;
	infatable guests[2] =
	{
		{"Bambi", 0.5,21.99	},
		{"Godzilla",200,565.99}	
	};
	
	cout << "The guests " << guests[0].name << " and " << guests[1].name
		 << "\nhave a combined volume of "
		 << guests[0].volume+guests[1].volume << " cubic feet. \n";
	return 0;
		
} 
