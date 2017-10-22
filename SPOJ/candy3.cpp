#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t)
  {
    char a_char;
    a_char=getchar();
    unsigned long long int n,sum=0,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>temp;
            sum=(sum+temp)%n;
    }
    if(sum)
      cout<<"NO\n";
    else
      cout<<"YES\n";
    t--;
  }
}
