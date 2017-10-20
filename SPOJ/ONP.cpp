//20/10/17
#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}

void EvaluateExp(string s)
{
    stack<char> st;
    int l = s.length();
    string ns;
    for(int i = 0; i < l; i++)
    {
        // If the scanned character is an operand, add it to output string.
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
        ns+=s[i];

        // If the scanned character is an ‘(‘, push it to the stack.
        else if(s[i] == '(')

        st.push('(');

        // If the scanned character is an ‘)’, pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ns += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }

        //If an operator is scanned
        else{
            while(!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                char t = st.top();
                st.pop();
                if(prec(t)==prec(s[i])&&s[i]=='^')
                {
                  st.push(t);
                  break;
                }
                ns += t;
            }
            st.push(s[i]);
        }

    }
    //Pop all the remaining elements from the stack
    while(!st.empty())
    {
        char c = st.top();
        st.pop();
        ns += c;
    }

    cout << ns << endl;

}

int main()
{
  string infix;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>infix;
    EvaluateExp(infix);
  }
  return 0;
}
