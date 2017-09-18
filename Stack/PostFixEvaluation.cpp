#include "iostream"
#include "stack"
#include "string"

using namespace std;


int EvaluateExp(string expression){
  stack<int> stack;
  for (int i=0;i<expression.length();i++){

      if(expression[i]>='0' && expression[i]<='9'){
        stack.push(expression[i]-'0');
      }

      else {
        if (stack.empty())
        {
          cout<<"Enter valid expression";
          return 0;
        }

        else
        {
            int y = stack.top();
            stack.pop();

            int x = stack.top();
            stack.pop();

            if (expression[i]=='+')
              stack.push(x+y);

            else if (expression[i]=='-')
              stack.push(x-y);

            else if (expression[i]=='*')
              stack.push(x*y);

            else if (expression[i]=='/')
              stack.push(x/y);
        }
    }
  }
  return stack.top();
}

int main() {
    string strexp;
    int result;
    cout<<"Enter a postfix expression\n";
    getline(cin,strexp);
    result = EvaluateExp(strexp);
    cout<<"The result of expression is "<<result;
}
