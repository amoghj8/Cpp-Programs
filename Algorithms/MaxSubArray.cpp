#include "bits/stdc++.h"

using namespace std;

int main()
{
  int n;
  cout<<"Enter the no. of elements\n";
  cin>>n;
  int a[n];
  for (size_t i = 0; i < n; i++) {
    cin>>a[i];
  }


  int ans = a[0],
  	ans_l = 0,
  	ans_r = 0,
  	sum = 0,
  	minus_pos = -1;
  for (int r=0; r<n; ++r) {
  	sum += a[r];

  	if (sum > ans) {
  		ans = sum;
  		ans_l = minus_pos + 1;
  		ans_r = r;
  	}

  	if (sum < 0) {
  		sum = 0;
  		minus_pos = r;
  	}
  }
  cout<<ans<<endl;
  cout<<"Max start index\t"<<ans_l<<endl;
  cout<<"Max end index\t"<<ans_r<<endl;
}
