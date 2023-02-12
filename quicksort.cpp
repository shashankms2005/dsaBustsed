#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
  // declearing pivot value
  int pivot = arr[s];

  // find count(how many values are greater than pivot)
  int cnt = 0;
  for (int i = s + 1; i <= e; i++)
  {
    if (arr[i] <= pivot)
    {
      cnt++;
    }
  }

  // finding pivot index and swapping
  int pivotindex = s + cnt;
  swap(arr[pivotindex], arr[s]);

  // making left part smaller than pivot and right part bigger than pivot
  int i = s, j = e;
  while (i < pivotindex && j > pivotindex)
  {
    while (arr[i] < pivot)
    {
      i++;
    }
    while (arr[j] > pivot)
    {
      j--;
    }
    if (i < pivotindex && j > pivotindex)
    {
      swap(arr[i++], arr[j--]);
    }
  }

  return pivotindex;
}
void mergesorting(int *arr, int s, int e)
{
  // base case
  if (s >= e)
    return;
  // to get pivot index
  int p = partition(arr, s, e);
  // sort left side
  mergesorting(arr, s, p - 1);
  // sort right side
  mergesorting(arr, p + 1, e);
}
int main()
{
  int arr[100];
  int size;
  cout << "enter array size and ele: " << endl;
  cin >> size;
  cout << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  mergesorting(arr, 0, size - 1);
  cout << "sorted ele: " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}