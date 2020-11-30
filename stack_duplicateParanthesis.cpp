#include<bits/stdc++.h>
using namespace std;

string s;

bool duplicateFound(int n)
{
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        if(s[i]==')')
        {
            char a= st.top();
            st.pop();
            int count=0;
            while(a!='(')
            {
               count= count +1;
               a=st.top();
              
               st.pop();
            }
            if(count<1)
            {
                return true;
            }
        }
        else{
            st.push(s[i]);
            
        }
    }
   return false; 
}

int main()
{
    
    cin>>s;
    int n=s.size();
    if(duplicateFound(n))
    {
        cout<<"Duplicate Paranthesis found"<<endl;
    }
    else{
        cout<<"Not duplicate paranthesis"<<endl;
        
    }}
    