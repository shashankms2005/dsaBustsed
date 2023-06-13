#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
//     INSERTION
Node *insert(Node *root, int Key)
{
    // Your code here
    if (root == NULL)
    {
        Node *node = new Node(Key);
        return node;
    }

    if (Key > root->data)
    {
        root->right = insert(root->right, Key);
    }
    if (Key < root->data)
    {
        root->left = insert(root->left, Key);
    }
    return root;
}
//     SEARCHING
bool search(Node *root, int x)
{
    // Your code here
    /*
      if(root==NULL)
      return 0;

      if(root->data==x)
      return 1;

      if(root->data>x)
      search(root->left,x);
      else
      search(root->right,x);
  */
    // OPTIMISED APPROACH

    Node *temp = root;
    while (temp != NULL)
    {
        if (temp->data == x)
            return 1;

        if (temp->data > x)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return 0;
}
//   PREDECESSOR AND SUCESdata
void sucessor(Node *root, int key, Node *&suc)
{
    while (root != NULL)
    {
        if (key >= root->data)
        {
            root = root->right;
        }
        else
        {
            suc = root;
            root = root->left;
        }
    }
}
void predecessor(Node *root, int key, Node *&pre)
{
    while (root != NULL)
    {
        if (key <= root->data)
        {
            root = root->left;
        }
        else
        {
            pre = root;
            root = root->right;
        }
    }
}
void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
    // Your code goes here

    sucessor(root, key, suc);
    predecessor(root, key, pre);
}
void minval(Node *root, int &mini)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    mini = root->data;
}

//   DELETION
Node *deleteNode(Node *root, int X)
{
    // your code goes here
    if (root == NULL)
    {
        delete root;
        return NULL;
    }

    if (root->data == X)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        if ((root->left != NULL && root->right == NULL))
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        if ((root->right != NULL && root->left == NULL))
        {
            Node *temp2 = root->right;
            delete root;
            return temp2;
        }

        if (root->left != NULL && root->right != NULL)
        {
            int mini = 0;
            minval(root->right, mini);
            root->data = mini;
            root->right = deleteNode(root->right, mini);
            return root;
        }
    }

    else if (X > root->data)
    {
        root->right = deleteNode(root->right, X);
    }
    else if (X < root->data)
    {
        root->left = deleteNode(root->left, X);
    }
}