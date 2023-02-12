#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    // find length of two parts
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // create 2 array to store array ele
    int *first = new int[len1];
    int *second = new int[len2];

    // to store arr ele in 2 devided parts
    int mainarrayindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainarrayindex++];
    }

    // to merge two array
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainarrayindex++] = first[index1++]; 
        }
        else
        {
            arr[mainarrayindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainarrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainarrayindex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    // left part divide
    mergesort(arr, s, mid);
    // right part
    mergesort(arr, mid + 1, e);
    // merge
    merge(arr, s, e);
}
int main()
{
    int arr[100];
    int size;
    cout << "enter array size and ele: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    mergesort(arr, 0, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}