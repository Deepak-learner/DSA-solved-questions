#include <iostream>
using namespace std;

string s;

bool isPalindrome( int i , int t){
    if(i>=t)
    {
        return true;
    }
    if(s[i]==s[t])
    {
    
        return isPalindrome(i+1 , t-1);
    }
    else{
        return false;
    }
}

int main() {
	// your code goes here
	
	cin>>s;
	int n=s.size();
	int i=0;
	if(isPalindrome(i,n-1))
    {
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"is not palindrome"<<endl;
    }
	
	
	return 0;
}
