#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // CONSTRUCTOR
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // DESTRUCTOR
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete this->next;
            this->next = NULL;
        }
        cout << "the value which is deleted is: " << value << endl;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
bool floydcycle(Node* &head){
    if(head==NULL){
        return 1;
    }
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            return 1;
        }
    }
    return 0;
}
void Headinsertion(Node *&head, int data)
{
    /**if LL is not initialised using constructor ->

     if(head==null){
      Node* temp=new Node(data);
      head=temp;
      }
    else{
        ....the below code;
    }

    */
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void Tailinsertion(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertionatanyposition(Node *&head, Node *&tail, int position, int data)
{
    // insertion at 1 st postion
    if (position == 1)
    {
        Headinsertion(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        // temp->node before 1 postion to the position to be inserted.
        temp = temp->next;
        cnt++;
    }
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
    // insertion at last postion.
    if (temp->next == NULL)
    {
        Tailinsertion(tail, data);
        return;
    }
}
void deletion(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        // head jumped to next node.
        head = head->next;
        temp->next = NULL; // 1st node points null.
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *node1 = new Node(10);
    // Node* head=NULL;
    // Node* tail=NULL; -> if constructors not used in starting
    Node *head = node1;
    Node *tail = node1;
    print(node1);
    /**Node *node2 = new Node(2);
    Node *node3 = new Node(9);  ->  this is new linked list**/
    Headinsertion(head, 20);
    print(head);
    Tailinsertion(tail, 5);
    print(head);
    insertionatanyposition(head, tail, 2, 56);
    print(head);
    insertionatanyposition(head, tail, 1, 6);
    print(head);
    insertionatanyposition(head, tail, 6, 85);
    print(head);
    deletion(head, tail, 1);
    print(head);
    deletion(head, tail, 5);
    print(head);
    cout << "TAIL->";
    print(tail);
       if(floydcycle(head)){
        cout<<"linked list is looped!"<<endl;
     }else{
        cout<<"linked list is linear"<<endl;
     }

    return 0;
}