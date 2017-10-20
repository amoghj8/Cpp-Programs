#include "bits/stdc++.h"

using namespace std;

int sq_sum(int n)
{
  return ((n*(n+1)*(2*n+1))/6);
}

int main()
{
  int n;
  while(true)
  {
    cin>>n;
    if(n==0)
    {
        break;
    }
    else
    {
      cout<<sq_sum(n)<<"\n";
    }
  }
  return 0;
}
