#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* push(Node* head , int d)
{
    Node* new_node = new Node();
    new_node -> data = d;
    new_node -> next = head;
    head = new_node; 
    return head;
}

Node* reverse(Node* second)
{
    Node* prev=NULL;
    Node* next=NULL;
    Node* current=second;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        
    }
    second=prev;
    return second;
}

bool compare ( Node* head1 , Node* head2)
{
    if(head1 == NULL && head2==NULL)
    {
        return true;
    }
    while(head1 != NULL && head2!= NULL)
    {
        if(head1->data != head2->data)
        {
            return false;
        }
        head1=head1->next;
        head2=head2->next;
        
    }
    return true ;
}

bool isPalindrome(Node* head)
{
    Node* first=head;
    Node* fast=head;
    Node* second=NULL;
    Node* odd=NULL;
    Node* prev;
    bool res;
    if(head!=NULL && head->next!=NULL)
    {
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=first;
            first=first->next;
            fast=fast->next->next;
            
        }
       
        //odd case 
        if(fast!=NULL)
        {
            odd= first;
            first=first->next;
            second=first;
        }
        else{
            second=first;
            
        }
        prev->next=NULL;
        
        second = reverse(second);
        bool res = compare(head , second);
        return res;
    }
}



int main() {
	// your code goes here
	Node* head=NULL;
	string s;
	cin>>s;
	int n= s.size();
	for(int i=0;i<n;i++)
	{
	   head =  push(head , s[i]);
	}

	if(isPalindrome(head))
	{
	    cout<<"true"<<endl;
	}
	else{
	    cout<<"false"<<endl;
	}
	return 0;
}
