#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
}*head;


class  double_list{
  public:
        node *createNode(int);
        void insertBegin();
        void printList();
        void reverseList();
        void isEmpty(node*);
        double_list()
        {
          head = NULL;
        }
};
  node *double_list::createNode(int value)
  {
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;

    return temp;
  }

  void double_list::insertBegin()
  {
      int data;
      cout << "Enter value for the node" << '\n';
      cin>>data;
      node *temp = createNode(data);

      if (head == NULL)
        {
            head = temp;
            return;
        }

      else
      {
          head->prev = temp;
          temp->next = head;
          head = temp;
      }
  }

  void double_list::printList()
  {
    node *temp = head;

    if (head == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }

    while(temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    std::cout << "NULL" << '\n';
  }

  void double_list::reverseList()
  {
    node *temp = head;
    if(temp==NULL)
    {
        std::cout << "Sorry the list is empty" << '\n';
        return;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        while(temp!=NULL)
        {
          cout<<temp->data<<"-->";
          temp = temp->prev;
        }
        cout<<'\n';
      }
}


  void double_list::isEmpty(node *head)
  {
    if (head==NULL)
    {
      std::cout << "The list is Empty. Try inserting a node at the beginnig" << '\n';
      return;
    }

    else
    {
      std::cout << "The list contains element(s)" << '\n';
      return;
    }
  }

int main() {
  int choice,val,pos;
  bool run=true;
  double_list dl;
  while (run)
  {
      cout<<"##################################\n";
      cout<<"1. Check if the list is empty (advised)\n";
      cout<<"2. Insert node at Beginning"<<endl;
      cout<<"3. Display Linked List"<<endl;
      cout<<"4. Print the list in reverse"<<endl;
      cout<<"404. Exit the program\n";
      cout<<"##################################\n";
      cin>>choice;
      switch(choice)
  {
    case 1:
    dl.isEmpty(head);
    cout<<endl;
    break;

    case 2:
          dl.insertBegin();
          dl.printList();
          cout<<endl;
          break;

          case 3:
          dl.printList();
          cout<<endl;
          break;

          case 4:
          dl.reverseList();
          break;
/*
          case 5:
          cout<<"Enter value and position of node to be inserted\n";
          cin>>val>>pos;
          sl.insertPos(val,pos);
          cout<<endl;
          sl.display();
          break;

          case 6:
          cout<<"Enter the poosition of element to be deleted\n";
          cin>>pos;
          sl.deletePos(pos);
          cout<<"The element has been deleted, the list is as follows:\n";
          sl.display();
          break;
*/
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
