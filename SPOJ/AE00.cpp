//22/10/17
#include <iostream>

using namespace std;

int main()
{
  int n,count=0;
  cin>>n;
  if(n<4)
    cout<<n;
  else
  {
    for(int i=2 ; i<=n ; i++)
    {
      for (size_t j = i; j <= n; j++) {
        if(i*j<=n)
          count+=1;
      }
    }
    cout<<(count+n);
  }
  return 0;
}
