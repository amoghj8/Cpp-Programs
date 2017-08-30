#include "iostream"

using namespace std;

struct Node {
  int data;
  Node *link;
}*top;

class StackOps{

  public:
    StackOps(){
      top = NULL;
    }

    void Push(int x) {
      Node *temp = new Node;
        temp->data = x;
        temp->link = top;
        top = temp;
      }

    void Pop() {
      Node *temp = top;
        if(temp == NULL){
          cout<<"The stack is empty\n";
          return;
        }

        top = top->link;
        delete temp;
    }

    void isEmpty() {
      if (top == NULL)
        cout<< "the stack's Empty";
      else
        cout<< "Stack contains element(s)";
    }

    void topElement() {
      if (top == NULL)
        cout<<"The stack is empty\n";
      else
        cout<< (top->data);
    }

    void Print() {
      Node *temp = top;
      if (top == NULL)
        cout<<"The stack is empty\n";
      else {
        while(temp != NULL){
          cout<<temp->data<<" ";
          temp = temp->link;
        }
      }
    }
  };

  int main() {

    StackOps S;
    S.Print();
    cout<<"\n";
    S.Push(5);
    S.Print();
    cout<<"\n";
    S.Push(6);
    S.Push(4);
    S.isEmpty();
    cout<<"\n";
    S.topElement();
    cout<<"\n";
    S.Push(3);
    S.Print();
    cout<<"\n";
    S.Pop();
    S.Print();
    return 0;
  }
