#include <iostream>

using namespace std;

struct node
{
  int priority;
  int data;
  node *next;
};

class PriorityQueue
{
  private:
    node *front;
  public:
    PriorityQueue()
    {
      front = NULL;
    }
    void insert(int x, int priority)
    {
      node *q = front;
      node *temp = new node;
      temp->data = x;
      temp->priority = priority;

      if(front == NULL || front->priority > priority )
      {
        temp->next = front;
        front = temp;
      }

      else if(q->priority <= priority && q->next==NULL)
      {
        temp->next = q->next;
        q->next = temp;
      }

      else
      {
        while (q->next != NULL && q->next->priority <= priority)
                    q=q->next;
                temp->next = q->next;
                q->next = temp;
      }
    }

    void deletele()
    {
      node *temp = front;
      front  = front->next;
      delete(temp);
    }

    void display()
    {
      node *q = front;
      std::cout << "Contents of Queue" << '\n';
      while(q!=NULL)
    {
      cout<<q->data<<"\t";
      q = q->next;
    }
    cout<<"NULL\n";
    }
};

int main()
{
  int choice,val,pri;
  bool run=true;
  PriorityQueue pq;
  while (run)
  {
      cout<<"##################################\n";
      cout<<"1. Display the Queue (advised)\n";
      cout<<"2. Insert data at Beginning"<<endl;
      cout<<"3. Delete Element"<<endl;
      cout<<"404. Exit the program\n";
      cout<<"##################################\n";
      cin>>choice;
      switch(choice)
  {
    case 1:
    pq.display();
    cout<<endl;
    break;

    case 2:
          std::cout << "Enter the value and priority" << '\n';
          cin>>val>>pri;
          pq.insert(val,pri);
          pq.display();
          cout<<endl;
          break;

          case 3:
          pq.deletele();
          pq.display();
          cout<<endl;
          break;

          case 404:
          cout<<"Exiting ...";
          run = false;
          break;

          default :
          cout<<"Enter valid number from the options provided\n";
          break;
     }
}
  return 0;
}
