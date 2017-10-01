#include "iostream"

using namespace std;

int main()
{
  int n;
  cout<<"Enter the no. of elements\n";
  cin>>n;
  int a[n];
  for (size_t i = 0; i < n; i++) {
    std::cin >>a[i] ;
  }
  for(int i=0;i<n-1;i++)
  {
    int imin =  i;
    for(int j=i+1;j<n;j++)
    {
      if(a[j]<a[imin])
        {
            imin = j;
        }
    }
      int temp;
      temp = a[i];
      a[i] = a[imin];
      a[imin] = temp;
  }
  std::cout << "The sorted array is" << '\n';
  for (size_t i = 0; i < n; i++) {
    cout<<a[i]<<"\t";
  }
}
