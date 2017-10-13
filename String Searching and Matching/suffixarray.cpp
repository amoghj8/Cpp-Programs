//Naive algorithm for the construction of the suffix array of a given string
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s,t;
    map<string,int> m;
    cin >> s;
    cin>>t;
    vector<int> v2;
    vector<string> v;
    for(int i = 0; i < s.size();i++)
    {
        m[s.substr(i,s.size()-i)] = i;
        v.push_back(s.substr(i,s.size()-i));
    }
     sort(v.begin(),v.end());
     for(int i = 0; i < v.size();i++)
     {
         cout << m[v[i]] << "\t";
         std::cout << v[i] << '\n';
     }


    std::map<string, int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
      if((it->first).compare(0, t.length(), t) == 0)
        v2.push_back(it->second);
    }

    sort(v2.begin(),v2.end());

    for(int i = 0; i < v2.size();i++)
    {
      std::cout << v2[i] << ' ';
    }
    return 0;
}
