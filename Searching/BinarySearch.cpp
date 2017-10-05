#include "iostream"
#include "quicksort.cpp"

int BinarySearch(int key, int *arr, int low , int high)
{
  if (high < low)
    return 0;
  else
    {
    int mid = (low+high)/2;

    if(arr[mid]<key)
    {
      BinarySearch(key,arr,mid+1,high);
    }
    else if(arr[mid]>key)
    {
      BinarySearch(key,arr,low,mid-1);
    }
    else
      return 1;
    }
}

int main() {
  int n,key,i,flag=0;
  std::cout << "Enter the no. of elements in array" << '\n';
  std::cin >> n;
  int arr[n];
  std::cout << "Enter the elements" << '\n';
  for (size_t i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  QuickSort(arr,0,n-1);
  std::cout << "The sorted array is" << '\n';
  for (size_t i = 0; i < n; i++) {
    std::cout << arr[i]<<"\t";
  }
  std::cout << "\nEnter the search element" << '\n';
  std::cin>>key;
   flag = BinarySearch(key,arr,0,n-1);
  if(flag)
  {
    std::cout << "\nElement found in the array" << '\n';
  }
  else
  {
    std::cout << "\nElement not present in array" << '\n';
  }
  return 0;
}
