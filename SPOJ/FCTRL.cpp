//19/10/17
#include <bits/stdc++.h>

using namespace std;

int fives(int n, int max_pow5)
{
    int zeros_count = 0;
    for (size_t i = 1; i <=max_pow5; i++) {
      zeros_count += floor(n/pow(5,i));
    }
    return zeros_count;
}

int main()
{
  int t,n,zeros_count;
  cin>>t;
  for (size_t i = 0; i < t; i++) {
    cin>>n;
    double k = log(n)/log(5);
    int max_pow5 = (int) k;
    if(n<=4)
      cout<<"0\n";
    else
    {
      zeros_count = fives(n,max_pow5);
      cout<<zeros_count<<"\n";
    }
  }
  return 0;
}
