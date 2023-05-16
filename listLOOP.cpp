#include <iostream>
#include <map>
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
void Headinsertion(NODE *&head, int data)
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
    NODE *temp = new NODE(data);
    temp->next = head;
    head = temp;
}
void Tailinsertion(NODE *&tail, int data)
{
    NODE *temp = new NODE(data);
    tail->next = temp;
    tail = temp;
}
void insertionatanyposition(NODE *&head, NODE *&tail, int position, int data)
{
    // insertion at 1 st postion
    if (position == 1)
    {
        Headinsertion(head, data);
        return;
    }
    NODE *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        // temp->node before 1 postion to the position to be inserted.
        temp = temp->next;
        cnt++;
    }
    NODE *newnode = new NODE(data);
    newnode->next = temp->next;
    temp->next = newnode;
    // insertion at last postion.
    if (temp->next == NULL)
    {
        Tailinsertion(tail, data);
        return;
    }
}
NODE* floydcycle(NODE *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    NODE *fast = head;
    NODE *slow = head;
    while (fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (fast == slow)
        {
            return fast;
        }
    }
}
// NODE* floydSTARTINGINDEX(NODE* head,NODE* fast){
//     NODE* slow=head;
//     while(slow!=fast){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     return slow;
// }
NODE* floydSTARTINGINDEX(NODE* head,NODE* fast){
    NODE* slow=head;
    while(slow!=NULL && fast!=NULL){
             if(fast==slow){
            return fast;
        }
        slow=slow->next;
        fast=fast->next;
    }
    return NULL;
}
NODE* removingloop(NODE* head,NODE* FLOYDSTARTING){
    if(head==NULL){
        return NULL;
    }
   NODE* temp=FLOYDSTARTING;
   while(temp->next!=FLOYDSTARTING){
    temp=temp->next;
   }
   temp->next=NULL;
   return temp;
}
// ALTERNATE WAY OF DETECTING A LOOP
NODE *alternatewayofloopdetection(NODE *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    map<NODE *, bool> visited;
    NODE *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == 1)
        {
            return temp;
        }
        visited[temp] = 1;
        temp = temp->next;
    }
    return NULL;
}
int main()
{
    NODE *node1 = new NODE(12);
    NODE *head = node1;
    NODE *tail = node1;
    insertionatanyposition(head, tail, 2, 85);
    insertionatanyposition(head, tail, 3, 3);
    insertionatanyposition(head, tail, 4, 4);
    insertionatanyposition(head, tail, 1, 45);
    int cnt1 = 1;
    int cnt2 = 3;
    NODE *temp = head;
    while (cnt1 != cnt2)
    {
        temp = temp->next;
        cnt1++;
    }
    temp->next = head;
    // print(head);
    NODE* fastORslowbyfloyd=floydcycle(head);
    if(fastORslowbyfloyd!=NULL)
    {
        cout << "linked list is looped!" << endl;
    }
    else
    {
        cout << "linked list is linear" << endl;
    }
    NODE* FLOYDSTARTING=floydSTARTINGINDEX(head,fastORslowbyfloyd);
    cout<<"the starting Index of loop is:"<<FLOYDSTARTING->data<<endl;
    cout<<endl;

    cout << "**************answer by alternate way******************" << endl;

    NODE *STARTINGindex = alternatewayofloopdetection(head);
    // cout<<STARTINGindex ;
    if (STARTINGindex != NULL)
    {
        cout << "it is looped! and the starting node is:" << STARTINGindex->data << endl;
    }
    else
    {
        cout << "not looped!" << endl;
    }
    cout<<endl;
    cout<<"******REMOVING THE LOOP*******"<<endl;
    NODE* NEWHEAD=removingloop(head,FLOYDSTARTING);
    if(floydcycle(NEWHEAD)==NULL){
      cout<<"notlooped"<<endl;
    }else{
        cout<<"looped"<<endl;
    }
    return 0;
}