/*multiple inheritance*/

#include<iostream> 
using namespace std;
class A
{
 	public:
 	int x;
 	void getx()				//class A getx function
    {
     cout<<"enter value of x: ";
     cin>>x;
    }
};
class B
{
 	public:
 	int y;
 	void gety()				//class B gety function
 	{
 	 cout<<"enter value of y: ";
	 cin>>y;
 	}
};
class C : public A, public B  			 //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	cout<<"Sum = "<<x+y;			//class C sum function
 	}
};

int main()
{
 	 C obj1; 				//object of derived class C
 	 obj1.getx();
 	 obj1.gety();
 	 obj1.sum();
 	 return 0;
}   	
