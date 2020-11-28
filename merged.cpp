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

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
    
}

Node* merge(Node* head1 , Node* head2)
{
   
    Node* next2;
    Node* next1;
    while(head1!=NULL && head2!=NULL)
    {
        next2=head2->next;
        next1=head1->next;
        head1->next = head2;
        head2->next=next1;
       
        head1 = head1->next->next;
        head2=next2;
    }
    return head2;
}



int main() {
	// your code goes here
	Node* head1 =NULL;
	head1= push(head1 , 1);
	head1= push(head1 , 2);
	head1= push(head1 , 3);
	head1= push(head1 , 4);
	
	print(head1);
	cout<<endl;
	
	Node* head2 =NULL;
	head2= push(head2 , 11);
	head2= push(head2 , 12);
	head2= push(head2 , 13);
	head2= push(head2 , 14);
	head2= push(head2 , 7);
	head2= push(head2 , 8);
	print(head2);
	cout<<endl;
	head2=merge(head1 , head2);
	print(head1);
	cout<<endl;
	print(head2);
}
