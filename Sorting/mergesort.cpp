#include <iostream>
using namespace std;

void merge(int* ALR, int* L, int left_length, int* R, int right_length)
{
    int nL = left_length;
    int nR = right_length;
    int i=0;int j=0;int k=0;
    while (i<nL && j<nR) {
      if(L[i]<=R[j])
      {
        ALR[k] = L[i];
        k++;
        i++;
      }
      else
      {
        ALR[k] = R[j];
        k++;
        j++;
      }
    }
    while (i<nL)
    {
      ALR[k] = L[i];
      k++;
      i++;
    }
    while (j<nR)
    {
      ALR[k] = R[j];
      k++;
      j++;
    }
}

void MergeSort(int* A, int size)
{
    if (size<2)
      return;
    int mid = size/2;
    int* left = new int[mid];
    int* right = new int[size-mid];
    for (int i=0;i<mid;i++) {
      left[i] = A[i];
    }
    for (int i=mid;i<size;i++) {
      right[i-mid] = A[i];
    }

    MergeSort(left, mid);
    MergeSort(right, size - mid);

    merge(A, left, mid, right, size - mid);
    delete(left);
    delete(right);
}

int main() {

    int A[] = { 1,-3,14,7,52,8,505,-60,9 };

    int size = sizeof(A) / sizeof(A[0]);

    MergeSort(A, size);

    cout<<"Sorted array\n";
    for (size_t i = 0; i < size; i++)cout<<A[i]<<" ";

    return 0;
}
