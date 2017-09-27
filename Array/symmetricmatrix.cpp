#include <iostream>

using namespace std;

int main()
{
    int i,j,m;
    cout<<"enter the order of matrix";
    cin>>m;
    int a[m][m],flag=0;
    cout<<"\nenter matrix elements";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           if(a[i][j]!=a[j][i])
           {
               flag=1;
           }
        }
    }
    if(flag==0)
        cout<<"\nsymmetric";
    else
        cout<<"\nnot symmetric";
    return 0;
}
