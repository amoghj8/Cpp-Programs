//20/10/17

#include "iostream"

using namespace std;

int min_steps(int v[], int n, int count)
{
  int equal_count = (count/n);
  int moves=0;
  for (size_t i = 0; i < n; i++) {
    if(v[i]>equal_count)
    {
       while(v[i]!=equal_count)
      {
        v[i]-=1;
        moves+=1;
      }
    }
    else if(v[i]<equal_count)
    {
       while(v[i]!=equal_count)
      {
        v[i]+=1;
        moves+=1;
      }
    }
    else
      continue;
  }
  return (moves/2);
}

int main()
{
  int n,ele;
  while(true)
  {
    int count = 0;
    cin>>n;
    if (n == -1)
      break;
    else
    {
      int v[n];
      for (size_t i = 0; i < n; i++) {
          cin>>v[i];
      }
      for (size_t i = 0; i < n; i++) {
        count += v[i];
      }
      if((count%n) != 0)
        cout<<"-1\n";
      else
      {
        cout<<min_steps(v, n, count)<<"\n";
      }
    }
  }
  return 0;
}
