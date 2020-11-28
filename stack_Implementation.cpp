#include <iostream>
using namespace std;

class stack{
    int top;
    public:
    int a[1000];
    stack()
    {
        top=-1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void print();
};

bool stack :: push(int x)
{
    if(top> 999)
    {
        cout<<"stack overflow"<<endl;
        return false;
    }
    else{
        top++;
        a[top]=x;
        return true ;
    }
    
}

int stack :: pop()
{
    if(top<0)
    {
       cout<<"stack underflow"<<endl;
       return 0;
    }
    else{
        int x=a[top];
        top--;
        return x;
    }
    
}



bool stack ::isEmpty()
{
    if(top<0)
    {
        return true;
    }
    else{
        return false;
    }
}

int stack ::peek()
{
    if(top<0)
    {
        cout<<"stack empty"<<endl;
        return 0;
    }
    else{
        return a[top];
    }
}


int main() {
	// your code goes here
	stack s;
	s.push(10);
	s.push(20);
	s.pop();
	s.push(30);
	
	while(!s.isEmpty())
	{
	    cout<<s.peek()<<" ";
	    s.pop();
	}
	return 0;
}
