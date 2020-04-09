/* making stack*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> stack1;				 //empty stack of integer type
	stack1.push(100);
	stack1.push(200);
	stack1.push(300);				//pusing data to stack
	stack1.push(400);
	stack1.push(500);

	cout << "The topmost element of the stack is:" << stack1.top() << endl;
							//topmost element of stack
	cout << "The size of the stack is=" << stack1.size() << endl;
							//size of stack

	if (stack1.empty())
	{
		cout <<"Stack is empty" <<endl;		//checking stack is empty or not
	}
	else
	{
		cout <<"Stack is not empty"<<endl;
	}

/////////////////////////////////////////////

	cout<<"Removing 2 elements from stack"<<endl;
	stack1.pop();					//poping elements from stack
	stack1.pop();

	while (!stack1.empty())
	{
		cout<< stack1.top() << endl;		// printing stack elements
		stack1.pop();
	}

	if (stack1.empty())
	{
		cout <<"Stack is empty" <<endl;		//checking stack empty or not
	}
	else
	{
		cout <<"Stack is not empty"<<endl;
	}



}
