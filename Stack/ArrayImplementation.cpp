#include <iostream>

using namespace std;

#define  MAX_SIZE 10

class StackDS {
  private:
    int top;
    int A[MAX_SIZE];
  public:
    StackDS(){
      top = -1;
    }

    void Push(int x){
        if(top == MAX_SIZE-1){
          cout<<"Stack overflow...\n";
          return;
        }

        A[++top] = x;  // Same as top++; A[top] = x;
    }

    void Pop() {
      if(top == -1 ){
        cout << "Stack is Empty!" << '\n';
        return;
      }
      top--;
    }

    int isEmpty() {
      if(top == -1)
        return 1;
      return 0;
    }

    void Print(){

      if (top == -1){
        std::cout << "Stack is Empty" << '\n';
        return;
      }

      for(int i=0;i<=top;i++){
        std::cout << A[i] << '\n';
      }
    }
};

int main() {

  StackDS S;
  S.Print();
  S.Push(5);
  S.Print();
  S.Push(6);
  S.Push(4);
  S.Push(3);
  S.Print();
  S.Pop();
  S.Print();
  return 0;
}
