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

void LevelOrder(Node *root)
{
  if (root==NULL)
    return;
  queue<Node*> Q;
  Q.push(root);
  while(!Q.empty())
  {
    Node *current = Q.front();
    cout<<current->data<<" ";
    if(current->left!=NULL)
      Q.push(current->left);
    if(current->right!=NULL)
      Q.push(current->right);
    Q.pop();
  }
}

int main()
{
  Node *root = NULL;
  root = Insert(root,10);
  root = Insert(root,5);
  root = Insert(root,30);
  root = Insert(root,9);
  root = Insert(root,11);
  LevelOrder(root);
  return 0;
}
