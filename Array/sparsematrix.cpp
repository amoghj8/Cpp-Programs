#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n,c=0;
    cout<<"enter the order of matrix";
    cin>>m>>n;
    int a[m][n],b[3][10],k=0;
    cout<<"\nenter matrix elements";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        if(a[i][j]==0)
        {
            c++;
        }
        }
    }
    if(c<m*n/2)
    {
        cout<<"\nnot a sparse matrix";

    }
    else{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                b[0][k]=i;
                b[1][k]=j;
                b[2][k]=a[i][j];
                k++;
            }
        }
    }
    cout<<"\nthe sparse matrix is\n";
    cout<<"row\t";
    for(i=0;i<k;i++)
    {
        cout<<b[0][i]<<"\t";
    }
    cout<<endl;
    cout<<"col\t";
     for(i=0;i<k;i++)
    {
        cout<<b[1][i]<<"\t";
    }
    cout<<endl;
    cout<<"val\t";
    for(i=0;i<k;i++)
    {
        cout<<b[2][i]<<"\t";
    }
    }
    return 0;
}
