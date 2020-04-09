/* Hierarchial inheritance*/
#include <iostream> 
using namespace std;

class A					 //single base class
{
    public:
 	int x, y;
 	void getdata()
 	{
   	cout<<"Enter value of x and y:\n";
	cin >> x >> y;
 	}
};

class B : public A 			//B is derived from class base
{					//public inheritance
    public:
 	void product()
 	{
 	    cout<<"Product= "<<x*y<<endl;
 	}
};

class C :public A			 //C is also derived from class base
{					//public inheritance
    public:
 	void sum()
 	{
        cout<<"Sum= "<<x+y;
 	}
};

int main()				//main pgm
{
    B obj1;         			 //object of derived class B
    C obj2;          			 //object of derived class C
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
} 
