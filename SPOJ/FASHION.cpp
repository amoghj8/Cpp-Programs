#include "bits/stdc++.h"

using namespace std;

int hotness_bond(int a[], int b[], int n)
{
    int hotness_bond=0;
    for (size_t i = 0; i < n; i++) {
      hotness_bond += (a[i]* b[i]);
    }
    return hotness_bond;
}

int main()
{
  int t;
  cin>>t;
  while(t)
  {
    int n;
    cin>>n;
    int males[n],females[n];
    for (size_t i = 0; i < n; i++) {
      cin>>males[i];
    }
    for (size_t i = 0; i < n; i++) {
      cin>>females[i];
    }
    sort(males, males+n);
    sort(females, females+n);
    cout<<hotness_bond(males, females, n)<<"\n";
    t--;
  }
  return 0;
}
