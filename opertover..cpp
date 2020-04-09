/* operator overloading using friend function*/

#include<iostream>
using namespace std;
class ABC
{
	int x;
	public:
	ABC()		//default constructor
	{ }
	ABC(int a)	//parametrized constructor
	{ x=a;
	}
	~ABC()
	{ }
	void get_data()
	{
	cout<<x<<endl;
	}
	friend ABC operator+(ABC t1,ABC t2);	//friend function + opt overloading declarations
	friend ABC operator*(ABC t1,ABC t2); 	//friend function * opt overloading declarations
	friend ABC operator-(ABC t1,ABC t2); 	//friend function - opt overloading declarations
};


ABC operator+(ABC t1,ABC t2)
{
	ABC ret;
	ret.x=t2.x+t1.x;
	return ret;
} 

ABC operator*(ABC t1,ABC t2)
{
	ABC ret;
	ret.x=t2.x*t1.x;
	return ret;
}
 
ABC operator-(ABC t1,ABC t2)
{
	ABC ret;
	ret.x=t1.x-t2.x;
	return ret;
}

main()			//main pgm
{
	ABC a1(5),a2(3),a3(6),a4(10),a5; //objects of class ABC
	a5=a1+a2*a3-a4;		//operator overloading
	a5.get_data();

}
