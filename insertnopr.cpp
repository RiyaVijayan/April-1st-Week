/*insertion and extraction  operator overloading*/

#include<iostream>
using namespace std;
class A
{ int x,y;
	public:
		A()			//default constructor		
		{
		x=0,y=0;
		}
		A(int a,int b)
		{ 			//parametrized constructor
		x=a,y=b;
		}
		void get_data()
		{
		cout<<"x="<<x<<"y="<<y<<endl;
		}
					//friend function operator overloading
		friend istream& operator>>(istream& in,A&t);
		friend ostream& operator<<(ostream &out,A& t);
};

ostream & operator<<(ostream& out,A& t)	//insertion operator function defintion
{
	out<<"x="<<t.x<<" y="<<t.y<<endl;
	return out;
}

istream& operator>>(istream & in,A& t) //extraction operator function defintion
{ in>>t.x>>t.y;
	return in;
}
main()
{ 
	A o1;				//object of class A
	o1.get_data();
	cin>>o1;			//extraction opertor overloading
	cout<<o1;			//insertion opertaor overloading
	//o1.get_data();
}

