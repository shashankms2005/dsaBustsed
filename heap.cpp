/*
heap in stl -> #include<queue>
priority_queue<int>pq; ->default its max heap
priority_queue<int,vector<int>,greater<int>>min queue  ->its min queue
*/
#include <iostream>
using namespace std;
class heap
{
public:
    int size;
    int arr[1000];
    heap()
    {
        size = 0;
        arr[0] = -1;
    }
    void insert(int val)
    {
        // bottom to up
        size++;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deletion()
    {
        // top to down
        if (size == 0)
            return;
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int left = i * 2;
            int right = i * 2 + 1;
            if (left < size && arr[left] > arr[i])
            {
                swap(arr[left], arr[i]);
                i = left;
            }
            else if (right < size && arr[right] > arr[i])
            {
                swap(arr[right], arr[i]);
                i = right;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    /*
    for 1 based indexing
    int left = 2 * i;
    int right = 2 * i + 1;

    for 0 based indexing
    int left=2*i+1;
    int right=2*i=2;
    */
    int left = 2 * i;
    int right = 2 * i + 1;
    // 1 based indexing <=
    // 0 based indexing <
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (i != largest)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main()
{
    heap h;
    h.insert(2);
    h.insert(32);
    h.insert(6);
    h.insert(76);
    h.insert(9);
    h.insert(12);

    h.print();

    h.deletion();
    h.deletion();

    h.print();

    // build heap from array
    cout << "heapifying" << endl;
    int arr2[5] = {-1, 5, 6, 4, 9};
    int n = 4;
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr2, 5, i);
    }
    for (int i = 1; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}