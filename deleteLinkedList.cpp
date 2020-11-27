#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
};

Node* push(Node* head , int d)
{
    Node* new_node = new Node();
    new_node->data = d;
    new_node->next = head;
    head=new_node;
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


Node* deleteLinkedList(Node* head)
{
    Node* current =head;
    Node* next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        free(current);
        current= next;
    }
    head=NULL;
    return head;
}


int main() {
	// your code goes here
	Node* head=NULL;
	head=push(head , 8);
	head=push(head , 9);
    cout<<"Linked list : ";
    print(head);
    head = deleteLinkedList(head);
    print(head);
    cout<<"deleted linked list";
	return 0;
}
