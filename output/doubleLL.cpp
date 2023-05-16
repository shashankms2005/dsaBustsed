#include <iostream>
using namespace std;
class NODE
{
public:
    int data;
    NODE *next = NULL;
    NODE *prev = NULL;
    // CONSTRUCTOR
    NODE(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~NODE()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete this->next;
            this->next = NULL;
        }
        cout << "the value deleted is:" << value << endl;
    }
};
void print(NODE *&head)
{
    NODE *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertionhead(NODE *&head, int data)
{
    NODE *temp = new NODE(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertiontail(NODE *&tail, int data)
{
    NODE *temp = new NODE(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertionatanyposition(NODE *&head, NODE *&tail, int position, int data)
{
    if (position == 1)
    {
        insertionhead(head, data);
        return;
    }

    NODE *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL) // last should be defined before middle
    {
        insertiontail(tail, data);
        return;
    }
    NODE *newnode = new NODE(data);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}
void deletion(NODE *&head, NODE *&tail, int position)
{
    //cronology -> first prev later next (for deletion)
    if (position == 1)
    {
        NODE *temp = head;
        head = temp->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        NODE *prev = NULL;
        NODE *curr = head;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
            prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void reversedoublyLL(NODE* &head){
      NODE* prev=NULL;
        NODE* curr=head;
        while(curr!=NULL){
            NODE* forward=curr->next;
            curr->next=prev;
            curr->prev=prev;
            prev=curr;
            curr=forward;
        }
        head=prev;
        return;
}
int main()
{
    NODE *node1 = new NODE(45);
    NODE *head = node1;
    NODE *tail = node1;
    print(head);
    insertionhead(head, 20);
    print(head);
    insertiontail(tail, 9);
    print(head);
    insertionatanyposition(head, tail, 1, 6);
    print(head);
    insertionatanyposition(head, tail, 3, 7);
    print(head);
    insertionatanyposition(head, tail, 6, 36);
    print(head);
    deletion(head, tail, 1);
    print(head);
    deletion(head, tail, 3);
    print(head);
    reversedoublyLL(head);
    print(head);

    return 0;
}