#include <list>
#include <iostream>

using namespace std;

int main() {
  list<int> L,my_list;

  list<int>::iterator i,it1,it2;

//First list
  L.push_back(0);
  L.push_front(5);
  L.insert(++L.begin(),4);


  for(i=L.begin();i!=L.end();i++){
    std::cout<<*i<<" ";
  }

  std::cout <<  '\n' << *(L.begin());  // Past-the-element (end)
  cout<<"\n"<<*(--L.end())<<"\n";

  L.reverse();
  for(i=L.begin();i!=L.end();i++){
    std::cout<<*i<<" ";
  }

  std::cout <<  '\n' << *(L.begin());
  cout<<"\n"<<*(--L.end());

  //Second list

  for (int j = 1; j <= 10; j++) {
    my_list.push_back(10*j);
}

  it1 = it2 = my_list.begin();

  advance(it2,6);
  ++it1;

  it1 = my_list.erase(it1);
  it2 = my_list.erase(it2);

  cout<<endl<<*it1<<" "<<*it2<<endl;

  --it2;
  ++it1;

  it1 = my_list.erase(it1,it2);

  cout<<*it1<<" "<<*it2<<endl;

  my_list.insert(it1,40);//inserts prior to iterator
  my_list.insert(it1,50);

  for(it1=my_list.begin(); it1!= my_list.end(); it1++){
    cout<<*it1<<" ";
  }

  return 0;
}
