#include<iostream>

using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
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

bool Search(Node* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}

int FindMin(Node* root)
{
  if(root==NULL)
    return -1;
  else if(root->left==NULL)
    return root->data;
  return FindMin(root->left);
}

int FindMax(Node* root)
{
  if(root==NULL)
    return -1;
  else if (root->right == NULL)
    return root->data;
  else
  {
    while(root->right!=NULL)
    {
      root = root->right;
    }
  }
  return root->data;
}

int main()
{
  Node* root = NULL;
  root = Insert(root,10);
  root = Insert(root,20);
  root = Insert(root,8);
  cout<<root->data<<"\n";
  int n;
  cout<<"Enter a number\n";
  cin>>n;
  // Searching in a bst
  if(Search(root,n))
    cout<<"Search found\n";
  else
    cout<<"Element not present\n";
  // Max and min element
  cout<<"The minimum element in the tree is\n";
  if(FindMin(root)!=-1)
    cout<<FindMin(root)<<"\n";
  else
    cout<<"Tree is empty\n";
  cout<<"The maximum element in the tree is\n";
  root = Insert(root,30);
  if(FindMax(root)!=-1)
    cout<<FindMax(root)<<"\n";
  else
    cout<<"Tree is empty\n";
  return 0;
}
