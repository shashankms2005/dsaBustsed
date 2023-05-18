#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    cout << s.top() << endl;
    s.push(2);
    cout << s.top() << endl;
    s.push(3);
    cout << s.top() << endl;
    s.push(4);
    cout << s.top() << endl;
    s.push(5);
    cout << s.top() << endl;
    cout << "the peek element(LIFO)->which entered last " << s.top() << endl;
    s.pop();
    s.pop();
    cout << "ele in peek after pop operation twice " << s.top() << endl;
    cout << "size of stack " << s.size() << endl;
    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack has elements" << endl;
    }

    stack<int> s2;
    s2.push(8);
    s2.push(9);
    s2.push(10);
    s.swap(s2);
    cout << "peek element in s after swapping" << s.top() << endl;
    cout << "peek element in s2 after swapping" << s2.top() << endl;

    return 0;
}