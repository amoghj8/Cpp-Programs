#include "iostream"

using namespace std;

struct Node{
  int data;
  Node *next;
}*front,*rear;

class Queue {
  public:
    Queue(){
      front = rear = NULL;
    }

  void Enqueue(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if (front == NULL &&  rear == NULL){
        front = temp;
        rear = temp;
        return ;
      }
    else {
        rear->next = temp;
        rear = temp;
      }
  }

  void Dequeue(){

    Node *temp = front;

    if (front == NULL){
      cout<<"The Queue is empty, can't Dequeue\n";
      return;
    }

    else {
        front = front->next;
        delete temp;
    }
  }

  void Print(){

    Node *temp = front;

    cout <<"Queue:\n";

    while(temp!=NULL){
      cout<<temp->data<<"\t";
      temp = temp->next;
    }
    cout<<"NULL\n";
  }

  bool IsEmpty(){
    if (front == NULL)
      return true;

    else
      return false;
  }
};

int main(){
  Queue Q;
  int choice,number;
  bool run = true;

  while (run)
  {
    std::cout << "Enter option from list below" << '\n';
    std::cout << "1. Check if Empty" << '\n';
    std::cout << "2. Add no. to Queue" << '\n';
    std::cout << "3. Remove no. from Queue" << '\n';
    std::cout << "4. Print the elements of Queue" << '\n';
    std::cout << "5. Exit the program" << '\n';
    cin>>choice;

    switch (choice) {
      case 1: if(Q.IsEmpty())
                  cout<<"The queue is empty\n";
              else
                  std::cout << "The queue aint empty" << '\n';
              break;

      case 2: cout<<"\nEnter a no. \n";
              cin>>number;
              Q.Enqueue(number);
              Q.Print();
              break;

      case 3: Q.Dequeue();
              Q.Print();
              break;

      case 4: Q.Print();
              break;

      case 5: run = false;
              cout<<"Stopped execution";
              break;

      default :
        cout<<"Enter valid option from the list\n";

    }
  }
}
