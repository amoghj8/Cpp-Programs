#include <iostream>

using namespace std;

struct node
{
    int info;
    struct node *next;
}*head;

class single_llist
{
    public:
        node *createNode(int);
        void insertBegin();
        void display();
        void reverseList(node*);
        void isEmpty(node*);
        void insertPos(int,int);
        void deletePos(int);
        single_llist()
        {
            head = NULL;
        }
};

node *single_llist::createNode(int value)
{
    node *temp;
    temp = new(node);
    temp->info = value;
    temp->next = NULL;
    return temp;
}


void single_llist::insertBegin()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    node *temp, *p;
    temp = createNode(value);
    if (head == NULL)
    {
        head = temp;
        head->next = NULL;
    }
    else
    {
        p = head;
        head = temp;
        head->next = p;
    }
    cout<<"Element Inserted at beginning"<<endl;
}

void single_llist::display()
{
    struct node *temp;
    if (head == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = head;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void single_llist::reverseList(node *head)
{
    node *temp = head;
    if(head==NULL)
        return;
    else
    {
        reverseList(temp->next);
        cout<<temp->info<<endl;
    }
}

void single_llist::isEmpty(node *head)
{
    if (head==NULL) {
        cout<<"The list is Empty"<<endl;
    }
    else
        cout<<"The list has element(s)\n";
}

void single_llist::insertPos(int val,int Pos)
{
    node *temp = head;
    if (Pos==0)
    {
        temp = createNode(val);
        temp->next = head;
        head = temp;
    }
    else {

        for(int i=0;i< (Pos-1); i++)
        {
            temp = temp->next;  //n-1 th
        }
        node *temp2 = createNode(val);
        temp2->next = temp->next;
        temp->next = temp2;
    }
}

void single_llist::deletePos(int Pos)
{
    node *temp = head;
    if(Pos == 0)
    {
        head = head->next;
        delete temp;
    }
    else
    {
        for(int i=0;i<Pos-1;i++)
        {
            temp = temp->next;
        }
        node *temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
    }
}
int main()
{
    int choice,val,pos;
    bool run=true;
    single_llist sl;
    while (run)
    {
        cout<<"##################################\n";
        cout<<"1. Check if the list is empty (advised)\n";
	    cout<<"2. Insert node at Beginning"<<endl;
		cout<<"3. Display Linked List"<<endl;
		cout<<"4. Print the list in reverse"<<endl;
		cout<<"5. Insert node at specific position(0th indexing)\n";
		cout<<"6. Delete element at specific Position(Oth indexing)\n";
		cout<<"404. Exit the program\n";
		cout<<"##################################\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			sl.isEmpty(head);
			cout<<endl;
			break;

			case 2:
            sl.insertBegin();
            sl.display();
            cout<<endl;
            break;

            case 3:
            sl.display();
            cout<<endl;
            break;

            case 4:
            cout<<"The element(s) printed in reverse order are:\n";
            sl.reverseList(head);
            break;

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
