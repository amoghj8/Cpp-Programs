#include "bits/stdc++.h"

using namespace std;

float AP(float arr[])
{
  return arr[0]+3*(arr[1]-arr[0]);
}

float GP(float arr[])
{
    return arr[0]*pow((arr[1]/arr[0]),3);
}

int main()
{
  float arr[3];
  while(true)
  {
    for (size_t i = 0; i < 3; i++) {
      cin>>arr[i];
    }
    if(arr[0]==0 && arr[1]==0 && arr[2]==0)
      break;
    else
      {
          if((arr[1]-arr[0]) == (arr[2]-arr[1]))
            cout<<"AP "<<AP(arr)<<"\n";
          else
            cout<<"GP "<<GP(arr)<<"\n";
      }
  }
}
