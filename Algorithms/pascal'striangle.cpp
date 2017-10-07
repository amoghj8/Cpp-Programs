#include "bits/stdc++.h"

using namespace std;

int main()
{
  int n;
  cout<<"Enter the no. of rows of Pascal's Triangle to be formed\n";
  cin>>n;
  int arr[n][n];
  cout<<"Pascal's Triangle for you\n";
  for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j <= i; j++) {
        if(j==0 || (i==j)){
          arr[i][j] = 1;
          cout<<arr[i][j]<<"\t";
          }
        else{
          arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
          cout<<arr[i][j]<<"\t";
        }
      }
      cout<<"\n";
  }
}
