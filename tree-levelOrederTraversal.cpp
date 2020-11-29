#include <bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* left;
    Node* right;
};

Node* new_node(int d)
{
    Node* temp = new Node();
    temp -> data = d ;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void levelOrderPrint(Node* root)
{
    queue<Node*>q;
    if(root==NULL)
    {
        return;
    }
    q.push(root);
    while(!q.empty())
    {
        Node* res=q.front();
        cout<<res->data<<" ";
        q.pop();
        
        if(res->left!=NULL)
        {
            q.push(res->left);
        }
        if(res->right!=NULL)
        {
            q.push(res->right);
        }
    }
    
}

int main() {
	// your code goes here
	
	Node* root = new_node(1);
	root -> left = new_node(2);
    root -> right = new_node(3);
    root -> left -> left = new_node(4);
    root -> left -> right  = new_node(5);
	levelOrderPrint(root);
	return 0;
}
