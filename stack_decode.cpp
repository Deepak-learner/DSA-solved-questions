#include <bits/stdc++.h>
using namespace std;

string decode(string s)
{
    string result ;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        st.push(i+1);
    
    if(s[i]=='I' || i==s.size())
    {
        while(!st.empty())
        {
            result= result + to_string(st.top());
            st.pop();
        }
    }
    }
    return result ; 
}

int main() {
	// your code goes here
	string s;
	cin>>s;
	cout<<"Decode is : "<<decode(s);
	return 0;
}
