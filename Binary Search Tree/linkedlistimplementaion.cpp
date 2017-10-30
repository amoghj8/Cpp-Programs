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

int main()
{
  Node* root = NULL;
  root = Insert(root,10);
  root = Insert(root,20);
  root = Insert(root,8);
  int n;
  cout<<"ENter a number\n";
  cin>>n;
  if(Search(root,n))
    cout<<"Search found\n";
  else
    cout<<"Element not present\n";
  return 0;
}
