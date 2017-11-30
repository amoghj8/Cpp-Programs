#include "iostream"

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

Node* FindMin(Node* root)
{
    if (root->left==NULL)
      return root;
    else
      return FindMin(root->left);
}

Node* Delete(Node* root, int data)
{
  if(root==NULL)
    return root;
  else if (data < root->data)
    root->left = Delete(root->left,data);
  else if (data > root->data)
    root->right =  Delete(root->right,data);
  else
  {
    if ( root->left == NULL && root->right == NULL)
    {
      delete root;
      root = NULL;
    }
    else if (root->left == NULL)
    {
      Node* temp = root;
      root = root->right;
      delete temp;
    }
    else if (root->right == NULL)
    {
      Node* temp = root;
      root = root->left;
      delete temp;
    }
    else
    {
      Node *temp = FindMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right,temp->data);
    }
  }
  return root;
}

//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	cout<<root->data<<"\t";  //Print data
	Inorder(root->right);      // Visit right subtree
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	        5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4);
	root = Insert(root,1); root = Insert(root,11);

	// Deleting node with value 5, change this value to test other cases
	root = Delete(root,5);

	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
  return 0;
}
