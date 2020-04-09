/* virtual class concept */

#include<iostream>
using namespace std;
class A				//base class A
{
	public: int x;
		A()		//default constructor
		{ }
		A(int a)	//parametrized constructor
		{
		cout<<"constructor A"<<endl;
		x=a;
		}
		~A()		//destructor of class A
		{cout<<"Destructor A"<<endl;
		}
};
class B:virtual public A	// Class A is virtually inherited to class B
	//class B:public A
{
	public:
		int y;		
		B()		//default constructor
		{ 
		}
		B(int a,int b):A(a)
		{ 		//parametrized constructor and const call for class A
		cout<<"Constructor B"<<endl;
		y=b;
		}
		~B()		//destructor
		{
		cout<<"Destructor B"<<endl;
		}
		void get_data()
		{
		cout<<"x="<<x<<"y="<<y<<endl;
		}
};
//class C:public A
class C:virtual public A	//Class A is virtually inherited to class C
{
 public:
	int z;
	C()			//default constructor
	{ }
	C(int a,int b):A(a)	//parametrized constr and cinst call for class A
	{
	cout<<"Constructor  C"<<endl;
	z=b;
	}
	~C()			//destructor
	{ cout<<"Destructor C"<<endl;
	}
};

class D:public B,public C	//derived class D inherited from class B and C
{ public:
	int m;
	D()			//default constructor
	{ }
	D(int a,int b,int c,int d):A(a),B(a,b),C(a,c)
	{
	m=d;			//parameterized constructor with base class constructor call
	cout<<"Constructor  D"<<endl;
	}
	~D()
	{ cout<<"Destructor D"<<endl;
	}			//destructor
	void get_data()
	{
		//cout<<"x="<<B::x<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		//cout<<"x="<<C::x<<endl;
		cout<<"z="<<z<<endl;
		cout<<"m="<<m<<endl;
	}
};
main()
{ D d1(10,20,30,40);
	d1.get_data();		//object of class D

	B b(23,42);		//object of  class B
	b.get_data();
}
