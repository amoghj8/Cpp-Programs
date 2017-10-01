#include <iostream>

using namespace std;

int main()
{
  int n,temp;
  cout<<"Enter the no. of elements\n";
  cin>>n;
  int a[n];
  for (size_t i = 0; i < n; i++)
  {
      std::cin >> a[i];
  }
  for(int i=0;i<n-1;i++)
  {
    for (size_t k = 0; k < n-1-i; k++) {
      if(a[k]>a[k+1]){
        temp = a[k];
        a[k] = a[k+1];
        a[k+1] = temp;
      }
    }
  }
  cout<<"Sorted array is\n";
  for (size_t i = 0; i < n; i++)
  {
      std::cout << a[i]<<"\t";
  }
}
