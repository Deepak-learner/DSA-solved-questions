#include <iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;
};

Node* insertAtBegin(Node* head, int d)
{
    Node* new_node= new Node();
    if(head==NULL)
    {
        new_node->data=d;
        head = new_node;
        return head;
    }
    else{
        new_node->data=d;
        new_node->next=head;
        head=new_node;
        return head;
    }
}

Node* reverse(Node* head)
{
    Node* prev= NULL;
    Node* next= NULL;
    Node* current = head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
       
    }
    head=prev;
    return head;
    
}
 

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
        if(head->next==NULL)
        {
            cout<<head->data<<endl;
            break;
        }
    }
    
}



int main() {
	// your code goes here
	Node* head=NULL;
	head=insertAtBegin(head , 4);
	head=insertAtBegin(head , 4);
	head=insertAtBegin(head , 2);
	head=insertAtBegin(head , 2);
	cout<<"Linked List : ";
	print(head);
	head = reverse(head);
	cout<<"reverse linked list  : ";
	print(head);
	
}