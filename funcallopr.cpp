/*function call operator*/

#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A()
	{ }		//default constructor
	A(int a,int b)
	{
	x=a,y=b;	//parametrized constructor
	}
	void get_data()
	{
	cout<<x<<" "<<y<<endl;
	}
	void operator()(int m,int n)
	{		//operator function
	x=m,y=n;
	}
};

main()			//main pgm
{
	A obj1,obj2;	//objects of class A
	obj1(19,67);	//function call operator overloading
	obj1.get_data();
}
