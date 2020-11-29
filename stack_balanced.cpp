#include <iostream>
using namespace std;

string s;

bool isBalanced(int n)
{
    bool flag=true;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            c++;
        }
        else
        {
            c--;
        }
        if(c<0)
        {
            flag=false;
            break;
        }
    }
    if(c!=0)
    {
        flag=false;
    }
    return flag;
}

int main() {
	// your code goes here
	
	cin>>s;
	int n=s.size();
    if(isBalanced(n))
    {
        cout<<"balanced"<<endl;
    }
    else
    {
        cout<<"not balanced"<<endl;
    }
	return 0;
}
