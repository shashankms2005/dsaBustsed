#include <iostream>
using namespace std;
void map(int src, int desti)
{
    if (src == desti)
    {
        cout << "reached destination!!" << endl;
        return;
    }

    cout << "sourse: " << src << " destination: " << desti << endl;

    map(src + 1, desti);
}
int sums(int *arr, int size)
{
    // base case
    if (size == 0)
        return 0;

    int ans = arr[0] + sums(arr + 1, size - 1);
    return ans;
}
int main()
{
    int desti;
    int src = 1;
    cout << "enter destination: " << endl;
    cin >> desti;
    map(src, desti);
    cout << endl;

    int arr[100];
    int size;
    cout << "enter size and ele : " << endl;
    cin >> size;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int ans = sums(arr, size);
    cout << "sum: " << ans;
    return 0;
}