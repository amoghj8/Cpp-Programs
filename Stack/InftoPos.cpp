#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char a)
{
    switch (a) {
      case '^': return 3;
                break;
      case '/': return 2;
                break;
      case '*': return 2;
                break;
      case '+': return 1;
                break;
      case '-': return 1;
                break;
    }
}

string EvaluateExp(string s)
{

    stack<char> stack;
    string postfix_exp;

    for(int i=0;i<s.length();i++)
    {
      //Operand
      if (s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
        postfix_exp+=s[i];

      //Opening Parenthesis
      else if (s[i]=='(')
        stack.push(s[i]);

      //Closing parenthesis
      else if (s[i]==')')
      {
          while(!stack.empty()||(stack.top()!=')'))
          {
            char top = stack.top();
            stack.pop();
            postfix_exp+=top;
          }
          if(stack.top() == '(')
          {
              char c = stack.top();
              stack.pop();
          }
      }

      //operator
      else
      {
        while(!stack.empty()&&(precedence(s[i])<=precedence(stack.top())))
        {
          char t = stack.top();
          stack.pop();
          if(precedence(t)==precedence(s[i])&&s[i]=='^')
          {
            stack.push(t);
            break;
          }
          postfix_exp += t;
        }

        stack.push(s[i]);
      }
    }

    while(!stack.empty())
    {
        char c = stack.top();
        stack.pop();
        postfix_exp += c;
    }

    return postfix_exp;

}

int main()
{
  string infix,postfix;
  cout<<"Enter an infix expression\n";
  getline(cin,infix);
  postfix = EvaluateExp(infix);
  cout<<"The postfix expression is \n"<<postfix;
}
