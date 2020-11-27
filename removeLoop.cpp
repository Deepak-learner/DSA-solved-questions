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

void removeDetectLoop(Node* head)
{
    Node* prev=NULL;
    while(head!=NULL)
    {
        if(head->flag == 1 )
        {
            prev->next=NULL;
            break;
        }
        head->flag=1;
        prev=head;
        head=head->next;
    }

}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
}

int main() {
	// your code goes here
	Node* head=NULL;
	head=push(head , 8);
	head=push(head , 9);
    head=push(head , 10);
    head=push(head , 11);
    
    head->next->next->next->next=head;
    
    removeDetectLoop(head);
    print(head);
	return 0;
}
