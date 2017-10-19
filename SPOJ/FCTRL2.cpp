//20/10/17

#include "bits/stdc++.h"
#define MAX_SIZE 160

using namespace std;

int multiply(int x, int arr[], int arr_size);

void fact(int n)
{

  int arr[MAX_SIZE];
  arr[0] = 1;
  int arr_size = 1;

  for (int x=2; x<=n; x++)
  {
     arr_size = multiply(x, arr, arr_size);
  }

  for(int i=arr_size-1;i>=0;i--)
  {
     cout  << arr[i];
  }
  cout<<"\n";
}

int multiply(int x, int arr[], int arr_size)
{
  int carry = 0;

  for (int i=0; i<arr_size; i++)
    {
        int prod = arr[i] * x + carry;
        arr[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        arr[arr_size] = carry%10;
        carry = carry/10;
        arr_size++;
    }
    return arr_size;
}

int main()
{
  int t,n;
  cin>>t;
  while(t)
  {
    cin>>n;
    fact(n);
    t--;
  }
  return 0;
}
