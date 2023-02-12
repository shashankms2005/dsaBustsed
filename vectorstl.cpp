#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(8);
    v.push_back(7);

    cout << "vector before any manipliation: " << endl;
    for (auto i : v)
    { // to display vector or any other stl
        cout << i << " " << endl;
    }
    cout << endl;
    cout << "vector at 3rd index: " << v.at(3) << endl;
    cout << "vector is empty or not: " << v.empty() << endl;
    cout << endl;

    v.pop_back(); // removes last ele
    for (auto i : v)
    {
        cout << i << " " << endl;
    }

    cout << "vector size: " << v.size() << endl; // after pop_back
    cout << "vector first: " << v.front() << endl;
    cout << "vector last: " << v.back() << endl;

    // to delete all ele in vector v.clear()
    v.clear();
    cout << "array size after clear() : " << v.size() << endl; // 0 because no ele
    cout << "capacity: " << v.capacity();                      // 4 output because max size is 4(here) inspite of ele there or not

    return 0;
}