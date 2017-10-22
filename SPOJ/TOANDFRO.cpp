//22/10/2017

#include "iostream"
#include "string"

using namespace std;

int main()
{
  while(true)
  {
    int col;
    cin>>col;
    if(col==0)
      break;
    else
    {
      int row,len,k;
      string str;
      cin>>str;
      len = str.size();
      row = len/col;
      string arr[row][col];

      for (size_t i = 0; i < row; i+=2) {
        for (size_t j = 0; j < col; j++) {
          arr[i][j] = str[col*i+j];
        }
      }
      for (size_t i = 1; i < row; i+=2) {
        k=0;
        for (size_t j = col; j != 0; j--)
        {
          arr[i][j-1] = str[col*i+k];
          k++;
        }
       }
       for (size_t j = 0; j < col; j++) {
          for (size_t i = 0; i < row; i++) {
            cout<<arr[i][j];
          }
       }
      cout  << '\n';
    }
  }
  return 0;
}
