#include <iostream>
using namespace std;
class NODE
{
public:
    int data;
    NODE *next;
    NODE(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~NODE()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete this->next;
            this->next = NULL;
        }
        cout << "the value which is deleted:" << value << endl;
    }
};
// in circular linked list only TAIL.
void print(NODE *tail)
{ // here its pass by value.
    // if empty
    if (tail == NULL)
    {
        cout << "linked list is empty!." << endl;
        return;
    }

        NODE *temp = tail;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != tail);
        cout << endl;
    }
void insertion(NODE *&tail, int data, int element) // after the element it will get inserted.
{
    if (tail == NULL)
    {
        NODE *temp = new NODE(data);
        // declaring tail here.
        tail = temp;
        temp->next = temp; // for circular
    }
    else
    {
NODE *temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        NODE *newnode = new NODE(data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void deletion(NODE *&tail, int data)
{
    if (tail == NULL)
    {
        cout << "no element to delete!" << endl;
        return;
    }else{
       // NODE *temp = tail;
      NODE *prev = tail;
        NODE *curr = prev->next;
    while (curr->data != data)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
        // only one  NODE
        if ( curr==prev)
        {
            tail = NULL;
        }
        //more than 1
        if (tail == curr)
        {
            tail = prev;
        }

    curr->next=NULL;
    delete curr;
    }
    }


int main()
{
    NODE *tail = NULL;
    print(tail);
    insertion(tail, 3, 3);
    print(tail);
    insertion(tail, 13, 3);
    print(tail);
    insertion(tail, 40, 13);
    print(tail);
    insertion(tail, 8, 3);
    print(tail);
    deletion(tail,40);
     print(tail);
     deletion(tail,3);
     print(tail);
    return 0;
}