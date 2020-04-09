/*assignment operator overloading*/

#include<iostream>
using namespace std;
class A
{int x,y;
	public:
		A()		//default constructor
		{
		x=0,y=0;
		}
		A(int a,int b)
		{
		x=a,y=b;	//parametrized constructor
		}
		void get_data()
		{
		cout<<x<<" "<<y<<endl;
		}
		A operator=(const A& t)
		{		//operator function
		x=t.x;
		y=t.y;
		return *this;
		}
};

main()
{
	A obj1(10,56),obj2,obj3;//objects of class A
	obj2=obj1;		//operator overloading
	obj2.get_data();
	obj3=obj2=obj1;
	obj3.get_data();
}

