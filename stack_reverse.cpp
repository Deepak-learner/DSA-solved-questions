#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	stack<char>st;
	int n=s.size();
	for(int i=0;i<n;i++)
	{
	    st.push(s[i]);
	}
	while(!st.empty())
	{
	    cout<<st.top();
	    st.pop();
	    
	}
	return 0;
}
