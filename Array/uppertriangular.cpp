#include <iostream>

using namespace std;

int main()
{
    int i,j,m;
    cout<<"enter the order of matrix";
    cin>>m;
    int a[m][m];
    cout<<"enter matrix elements";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nupper triangular matrix is\n";
    for(i=m-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
