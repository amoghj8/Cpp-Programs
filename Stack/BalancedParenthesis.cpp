#include "iostream"
#include <string>
#include "stack"

using namespace std;

bool BalParenthesis(string expression)
{
  stack<char> ParStack;

  for(int i=0;i<expression.length();i++)
  {

    if (expression[i]=='(' || expression[i]=='[' || expression[i]=='{')
    {
        ParStack.push(expression[i]);
    }

    else if (expression[i]==')' || expression[i]==']' || expression[i]=='}')
    {

      if (ParStack.empty())
      {
        return false;
      }
      char top = ParStack.top();

      ParStack.pop();

      if ((top == '(' && expression[i]!= ')') || (top == '[' && expression[i]!= ']') || (top == '{' && expression[i]!= '}'))
      {
          return false;
      }
    }
  }

  return ParStack.empty();
}

int main()
{
  string exp;
  cout<<"Enter an expression containing parenthesis\n";
  getline(cin,exp);
  if (BalParenthesis(exp))
    cout<<"The expression has balanced parenthesis\n";
  else
    cout<<"The expression isn't balanced wrt parenthesis\n";
}
