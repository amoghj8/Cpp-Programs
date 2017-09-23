#include <iostream>

using namespace std;

int main()
{
  int n,key;
  int i,j;
  cout<<"Enter the size of array\n";
  cin>>n;
  int a[n];
  cout<<"Enter the elements of array\n";

  for (i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for (i = 1; i < n; i++)
  {
      key = a[i];
      j = i-1;

      while (j >= 0 && a[j] > key)
      {
          a[j+1] = a[j];
          j = j-1;
      }
      a[j+1] = key;
  }

  cout<<"Sorted array is\n";
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<"\t";
  }

  return 0;
}
