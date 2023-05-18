#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    //no need of destructor
};
class stack
{
public:
    Node *top;
    stack()
    {
        top = NULL;
        // no size because its dynamic
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        // check if heap is full
        if (!temp)
        { // it can't overflow because its dynamic
            cout << "stack overflow" << endl;
        }
        else
        {
            //temp->data = data;
            temp->next = top;
            top = temp;
        }
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }
    int peek()
    {
        if (top == NULL)
        {
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    bool empty()
    {
        if (top == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    stack s;
    s.push(13);
    s.push(2);
    s.push(8);
    //s.push(88);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack has elements" << endl;
    }
}