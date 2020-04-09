/*Complex num addition using friend function*/

#include<iostream>
using namespace std;

class COMPLEX
{
	int real,img;				//private data members
	public:
	void set_data()
	{
		cout<<"Enter complex data real and imaginary"<<endl;
		cin>>real>>img;			//member function to set data  
	}
	void get_data()
	{
		if(img<0)
		cout<<real<<img<<"j"<<endl;
		else		
		cout<<real<<"+"<<img<<"j"<<endl;
	}

	friend COMPLEX operator+(COMPLEX t1,COMPLEX t2);
						//friend function declaration
};


COMPLEX operator+(COMPLEX t1,COMPLEX t2)	//friend function definition
{ static COMPLEX ret;
	ret.real=t1.real+t2.real;
	ret.img=t1.img+t2.img;
	return ret;
}

main()						//main pgm
{
	COMPLEX c1,c2,c3,c4;
	c1.set_data();
	c2.set_data();
	c4.set_data();
	c3=c1+c2+c4;				//operator + is overloaded
	c3.get_data();
}
