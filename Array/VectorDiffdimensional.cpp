#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // Single Dimensional
  vector <int> v(3,0);
  vector <int>::iterator it;

  for ( it= v.begin(); it!=v.end(); it++) {
    cout<<*it<<"\t";
  }

  // 2-Dimensional
  vector< vector<int> > v1(3, vector<int> (2));

  for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)
      {
        cout<<"\nEnter the value\n";
        cin>>v1[i][j];
      }

      for(int i=0;i<3;i++)
      {
        for(int j=0;j<2;j++)
          {
            cout <<v1[i][j]<<"\t";
          }
          cout<<"\n";
      }

      //3-DImensional
  vector< vector <vector<int> > > v2(3, vector <vector<int> > (2, vector<int> (4,0)));

  for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)
      {

        for (int k=0;k<4;k++){
          cout<<"\nEnter the value\n";
          cin>>v2[i][j][k];
      }
    }

  for(int i=0;i<3;i++)
      {
        for(int j=0;j<2;j++)
        {
          for (int k=0;k<4;k++){
            cout <<v2[i][j][k]<<"\t";
          }
          cout<<"\n";
      }
    }

    cout<<"\n"<<v2[2][1][0];

    cout<<"\n"<<v2[1][0][1];
}
