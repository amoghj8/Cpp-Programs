//22/10/17
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t)
  {
    int a;
    long unsigned b;
    cin>>a>>b;
    if(b==0)
      cout<<"1\n";
    else
      {
          if (a%10 == 0)
            cout<<"0\n";
          else if(a % 10 == 1)
            cout<<"1\n";
          else if (a %10 == 5)
            cout<<"5\n";
          else if (a %10 == 6)
            cout<<"6\n";
          else if(((a%10)==2) || ((a%10)==3) || ((a%10)==7) || ((a%10)==8))
          {
            int c = (b%4);
            if(c==0)
            {
              c=4;
            }
            int x = (int)pow((a%10),c);
            cout<<(x%10)<<"\n";
          }
          else
          {
            int c = (b%2);
            if(c==0)
            {
              c=2;
            }
            int x = (int)pow((a%10),c);
            cout<<(x%10)<<"\n";
          }
      }
    t--;
  }
  return 0;
}
