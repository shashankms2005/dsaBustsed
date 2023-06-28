#include <iostream>
using namespace std;
class trienode
{
public:
    char data;
    trienode *children[26];
    bool isterminal;

    trienode(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isterminal = false;
    }
};
class trie
{
public:
    trienode *root;
    trie()
    {
        root = new trienode('\0');
    }

    void insertutil(trienode *root, string word)
    {
        int index = word[0] - 'a';
        trienode *child;
        if (word.length() == 0)
        {
            root->isterminal = true;
            return;
        }
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new trienode(word[0]);
            root->children[index] = child;
        }
        insertutil(root, word.substr(1));
    }

    void insert(string word)
    {
        insertutil(root, word);
    }

    bool searchutil(trienode *root, string word)
    {
        int index = word[0] - 'a';
        trienode *child;
        if (word.length() == 0)
        {
            return root->isterminal;
        }
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchutil(root, word.substr(1));
    }

    bool search(string word)
    {
        return searchutil(root, word);
    }

    void deleteutil(trienode* root,string word){
        if(word.length()==0){
            root->isterminal=false;
            return;
        }
        int index=word[0]-'a';
        trienode* child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        deleteutil(root,word.substr(1));
    }

    void deletion(string word){
        deleteutil(root,word);
    }
};
int main()
{
    trie *t = new trie();
    t->insert("shashank");
    t->insert("ms");
    t->insert("shashu");

    cout << "ms is present or not  "<<t->search("ms")<<endl;

    t->deletion("ms");

    cout<<"ms is present or not after deletion "<<t->search("ms")<<endl;

   t->deletion("shashu");

   
    cout<<"shashank is present or not after deletion "<<t->search("shashank")<<endl;
    return 0;
}

/*
// trie node

struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};


//Function to insert string into TRIE.
void insert(struct TrieNode *root, string key)
{
    // code here
    int index=key[0]-'a';
    TrieNode* child;
    if(key.length()==0){
        root->isLeaf=true;
        return;
    }
    if(root->children[index]!=NULL){
        child=root->children[index];
    }else{
        child=new TrieNode();
        root->children[index]=child;
    }
    insert(child,key.substr(1));
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    // code here
      // code here
    int index=key[0]-'a';
    TrieNode* child;
    if(key.length()==0){
        return root->isLeaf;
    }
    if(root->children[index]!=NULL){
        child=root->children[index];
    }else{
        child=new TrieNode();
       return false;
    }
   return search(child,key.substr(1));
}



Node is as follows:
struct trie_node
{
    int value; // non zero if leaf
    trie_node_t *children[ALPHABET_SIZE];
};
class Solution{
  public:
  void deleteKey(trie_node_t *root, char key[])
  {
    //Code here
    int i=0;
    trie_node_t * child=root;
    while(key[i]!='\0'){
        int index=key[i]-'a';
        child=child->children[index];
        i++;
    }
    child->value=0;
  }
 
};
*/