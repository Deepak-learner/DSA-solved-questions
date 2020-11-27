#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    bool flag=0;
};

Node* push(Node* head , int d)
{
    Node* new_node= new Node();
    new_node -> data = d;
    new_node -> next =head;
    head=new_node;
    return head;
}

bool detectLoop(Node* head)
{
    while(head!=NULL)
    {
        if(head->flag == 1 )
        {
            return true;
        }
        head->flag=1;
        head=head->next;
    }
    return false ;
}

int main() {
	// your code goes here
	Node* head=NULL;
	head=push(head , 8);
	head=push(head , 9);
    head=push(head , 10);
    head=push(head , 11);
    
    head->next->next->next->next=head;
    if(detectLoop(head))
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
	return 0;
}
