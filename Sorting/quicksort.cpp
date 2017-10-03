#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
  int temp=a ;
  a = b;
  b = temp;
}

int Partition(int *ASE, int start,int end)
{
    int pivot = ASE[end];
    int pindex = start;
    for(int i=start;i<end;i++)
    {
      if(ASE[i]<=pivot)
      {
        swap(ASE[i],ASE[pindex]);
        pindex+=1;
      }
    }
      swap(ASE[pindex],ASE[end]);
      return pindex;
}

void QuickSort(int *A,int start, int end)
{
  if(start < end)
  {
  int partitionindex = Partition(A,start,end);
  QuickSort(A,start,partitionindex-1);
  QuickSort(A,partitionindex+1,end);
  }
}

int main()
{
  int A[] = { 1,-3,14,7,52,8,505,-60,9 };

  int size = sizeof(A) / sizeof(A[0]);

  QuickSort(A,0,size);

  cout<<"Sorted array\n";
  for (size_t i = 0; i < size; i++)cout<<A[i]<<" ";

  return 0;
}
