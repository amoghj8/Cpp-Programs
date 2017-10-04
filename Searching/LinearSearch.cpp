#include <iostream>

int main() {
  int n,key,i,flag=0;
  std::cout << "Enter the no. of elements in array" << '\n';
  std::cin >> n;
  int arr[n];
  std::cout << "Enter the elements" << '\n';
  for (size_t i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  std::cout << "\nEnter the search element" << '\n';
  std::cin>>key;
  for (i = 0; i < n; i++) {
    if(arr[i]==key)
    {
      flag = 1;
      break;
    }
  }
  if(flag)
  {
    std::cout << "\nElement found at index "<<i<<" in the array" << '\n';
  }
  else
  {
    std::cout << "\nElement not present in array" << '\n';
  }
  return 0;
}
