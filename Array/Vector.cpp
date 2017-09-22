#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v;

  for (int i=2;i<21;i+=2)
  {
    v.push_back(i);
  }

  cout<<"The elements of vector are\n";

  for (int i=0; i < v.size() ; i++)
  {
    cout<<v.at(i)<<"\t";
  }


  v.insert(v.begin()+2, 5);

  cout<<"The elements of vector are\n";

  for (int i=0; i < v.size() ; i++)
  {
    cout<<v.at(i)<<"\t";
  }

  v.erase(v.begin()+2);

  cout<<"\nThe elements of vector are\n";

  for (int i=0; i < v.size() ; i++)
  {
    cout<<v.at(i)<<"\t";
  }
}
