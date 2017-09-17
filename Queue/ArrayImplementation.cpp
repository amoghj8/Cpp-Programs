#include "iostream"

#define MAX_SIZE 10

using namespace std;


class Queue {

  private:
    int Arr[MAX_SIZE];
    int front, rear;

  public:
    Queue() {
      front = -1;
      rear = -1;
    }

  bool IsEmpty()
  {
    return (front==-1 && rear == -1);
  }

  bool IsFull()
  {
     return ((rear+1)%MAX_SIZE == front ? true : false);
  }

  void Enquqe(int x)
  {

    cout<<"Enqueuing "<<x<<"\n";

    if (IsFull())
    {
      cout<<"The array is full.Try Dequeuing first.\n";
      return;
    }

    if (IsEmpty())
    {
      front = rear = 0;
    }

    else
    {
       rear = (rear+1)%MAX_SIZE;
    }

    Arr[rear] = x;
  }

  void Dequque()
  {
    if (IsEmpty()) {
      std::cout << "Queue is empty" << '\n';
      return ;
    }

    if (front == rear)
    {
      front  = rear = -1;
    }

    else {
      front = (front+1)%MAX_SIZE;
    }

  }

  int Front ()
  {

    if (front == -1)
    {
      cout << "The array is empty, try Enqueuing\n";
      return -1;
    }

    return Arr[front];
  }

  void Print ()
  {

    // Enqueuing pos 0-9 ,dequeuing and enqueue (rear<front)
    int count = (rear-front+MAX_SIZE)%MAX_SIZE + 1;
    cout<<"Queue contains\n";
    for (int  i=0; i<count; i++)
    {
        int index = (front+i) % MAX_SIZE;
        cout<<Arr[index]<< "\t";
    }
    cout<<"\n";
  }
};

int main()
{
  Queue Q;
  int choice,number;
  bool run = true;

  while (run)
  {
    std::cout << "Enter option from list below" << '\n';
    std::cout << "1. Check if Empty" << '\n';
    std::cout << "2. Check if full" << '\n';
    std::cout << "3. Add no. to Queue" << '\n';
    std::cout << "4. Remove no. from Queue" << '\n';
    std::cout << "5. Print the elements of Queue" << '\n';
    std::cout << "6. Exit the program" << '\n';
    cin>>choice;

    switch (choice) {
      case 1: if(Q.IsEmpty())
                  cout<<"The queue is empty\n";
              else
                  std::cout << "THe queue aint empty" << '\n';
              break;

      case 2: if(Q.IsFull())
                  cout<<"The Queue is Full\n";
              else
                  cout<<"The Queue ain't full\n";
              break;

      case 3: cout<<"\nEnter a no. \n";
              cin>>number;
              Q.Enquqe(number);
              Q.Print();
              break;

      case 4: Q.Dequque();
              break;

      case 5: Q.Print();
              break;

      case 6: run = false;
              cout<<"Stopped execution";
              break;

      default :
        cout<<"Enter valid option from the list\n";

    }
  }
}
