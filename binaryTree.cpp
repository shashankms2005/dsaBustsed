#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildBinarytree(node *root)
{
    int data;
    cout << "enter the data" << endl;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    // here all left ele build and then right
    cout << "enter left side data to the value " << data << endl;
    root->left = buildBinarytree(root->left);
    cout << "enter right side data to the value " << data << endl;
    root->right = buildBinarytree(root->right);
}
int levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            //for reverse level order traversal first right push the left
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

void inorder(node *root)
{
    // bs
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void buildusinglevelordertraversal(node *&root)
{
    queue<node *> q;
    int data = 0;
    cout << "enter data" << endl;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        // here level by level its built
        cout << "enter left data for " << temp->data << endl;
        int leftdata = 0;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout << "enter right data for " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    // root=buildBinarytree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    buildusinglevelordertraversal(root); // building using level order traversal function is void only and its call by value
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    levelordertraversal(root);
    cout << "INOREDER TRAVERSAL ";
    inorder(root);
    cout << endl;
    cout << "POSTORDER TRAVERSAL ";
    postorder(root);
    cout << endl;
    cout << "PREORDER TRAVERSAL ";
    preorder(root);
    cout << endl;

    return 0;
}
