#include "iostream"
#include "queue"

using namespace std;

struct Node{
  int data;
  Node *left;
  Node *right;
};

Node* NewNode(int data)
{
  Node* newnode = new Node();
  newnode->data = data;
  newnode->left = NULL;
  newnode->right = NULL;
  return newnode;
}

Node* Insert(Node* root,int data)
{
  if (root == NULL)
    root = NewNode(data);
  else if(data<=root->data)
    root->left =  Insert(root->left,data);
  else
    root->right = Insert(root->right,data);
  return root;
}

void PreOrder(Node *root)
{
  if (root==NULL)
    return;
  cout<<root->data<<"\t";
  PreOrder(root->left);
  PreOrder(root->right);
}

int main()
{
  Node *root = NULL;
  root = Insert(root,10);
  root = Insert(root,5);
  root = Insert(root,30);
  root = Insert(root,9);
  root = Insert(root,11);
  PreOrder(root);
  return 0;
}
