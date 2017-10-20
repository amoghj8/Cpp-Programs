//20/10/2017

#include "bits/stdc++.h"

using namespace std;

int y_x(int x)
{
  if(x%2 == 0)
    return x*2;
  else
    return (x*2-1);
}

int y_x_2(int x, int y)
{
    if(x%2==0)
      return (x+y);
    else
      return (x+y-1);
}

int main()
{
  int t;
  cin>>t;
  for (size_t i = 0; i < t; i++) {
    int x,y;
    cin>>x>>y;
    if(((x-y)!=2)&&(x!=y))
    {
      cout<<"No Number\n";
    }
    else
      {
        if(x==y)
          cout<<y_x(x)<<"\n";
        else
          cout<<y_x_2(x,y)<<"\n";
      }
  }
  return 0;
}
