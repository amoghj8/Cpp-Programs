#include "iostream"

using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* Find(Node*root, int data) {
	if(root == NULL) return NULL;
	else if(root->data == data) return root;
	else if(root->data < data) return Find(root->right,data);
	else return Find(root->left,data);
}

Node* FindMin(Node* root)
{
  if (root==NULL)
    return root;
  while(root->left!=NULL)
  {
    root = root->left;
  }
  return root;
}

Node* GetSuccessor(Node* root, int data)
{
  Node* current = Find(root,data);
  if(current == NULL)
    return NULL;
  if(current->right!=NULL)//Case 1: Has right subtree
  {
    return FindMin(root->right);
  }
  else {   //Case 2: No right subtree  - O(h)
		Node* successor = NULL;
		Node* ancestor = root;
		while(ancestor != current) {
			if(current->data < ancestor->data) {
				successor = ancestor; //deepest node for which current node is in left
				ancestor = ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
		return successor;
	}
}

//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	cout<<root->data<<"\t";  //Print data
	Inorder(root->right);      // Visit right subtree
}

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,int data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	/*  Creating an example tree
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

	//Print Nodes in Inorder
	cout<<"Inorder Traversal: ";
	Inorder(root);
	cout<<"\n";

	// Find Inorder successor of some node.
	Node* successor = GetSuccessor(root,1);
	if(successor == NULL) cout<<"No successor Found\n";
	else
    cout<<"Successor is "<<successor->data<<"\n";
}
