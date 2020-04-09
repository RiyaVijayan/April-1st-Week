/* hybrid inheritance*/
#include <iostream>
using namespace std;

class A				// base class A
{
 	public:
 	int x;
};

class B : public A		//class B inherited from class A publically
{
 	public:
 	B()     		 //constructor to initialize x in base class A
 	{
	cout<<"Enter x"<<endl;
	cin>>x;
 	//x = 10;
 	}
};

class C				//Single base class C
 {
 	public:
 	int y;
 	C()  			 //constructor to initialize y
 	{
	cout<<"Enter y"<<endl;
	cin>>y;
 	//y = 4;
        }
};
class D : public B, public C  	 //D is derived from class B and class C publically
{
 	public:
 	void sum()
 	{
 	cout<<"Sum= "<<x+y<<endl;
 	}
};

int main()
{
         D obj1;         	 //object of derived class D
				 //hybrid class 
 	obj1.sum();
 	return 0;
}
