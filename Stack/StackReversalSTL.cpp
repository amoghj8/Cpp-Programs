#include "iostream"
#include "stack"
#include "string"

using namespace std;

 string ReverseString(string* s) {

    string str = *s;

    std::string::iterator it;

    stack<char> S;

    for(it=str.begin(); it!=str.end(); it++)
    {
        S.push(*it);
    }

    for(it=str.begin(); it!=str.end(); it++)
    {
        *it = S.top();
        S.pop();
    }

    return str;
  }

int main() {

  string s ;
  std::cout << "Enter a string" << '\n';

  getline(cin,s);

  s = ReverseString(&s);

  std::cout << "Output = " << s;

  return 0;
}
