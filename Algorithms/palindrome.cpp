#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cout<<"Enter the string\n";
  cin>>s;
  int flag=1;
  int length = s.length();
  for (size_t i = 0; i < length; i++) {
    if(s[i]!=s[length-i-1])
      {
      flag =0;
      break;
    }
  }
  if (flag)
    cout<<"The string is palindrome\n";
  else
    cout<<"The string isn't palindrome\n";
  return 0;
}
