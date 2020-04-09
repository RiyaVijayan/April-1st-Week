// public access specifier.cpp
#include <iostream>
using namespace std;

class base
{
 	private:
        int x;

 	protected:
 	    int y;

 	public:
 	    int z;

 	base() 				//constructor to initialize data members
 	{
 	 cout<<"Enter x. y and z"<<endl;
 	 cin>>x>>y>>z;
	 cout<<"x = " <<x<<endl;
	 cout<<"y = "<<y<<endl;
	 cout<<"z = "<<z<<endl;
 	}
};


class derive: public base		//y and z publically inherited to class derived
{
 	public:
 	    void showdata()
 	    {
	     cout<<"Derived function"<<endl;
 	     cout<<"x is not accessible"<<endl;
             cout<<"value of y is "<<y<<endl;
             cout<<"value of z is "<<z<<endl;
 	    }
};

int main()				//main prgm
{
     derive a; 				//object of derived class
     a.showdata();
    				 //a.x = 1;   not valid : private member can't be accessed outside of class
 			   	 //a.y = 2;   not valid : y is now private member of derived class
     				 //a.z = 3;   not valid : z is also now a private member of derived class
}
