
#include<iostream>
#include<vector>
using namespace std;
vector<char>ch;
char q[1000];
int size(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void valid(char arr[],int x){
    for(int i=0;i<x;i++){
    if(((arr[i]>='a') && (arr[i]<='z')) || ((arr[i]>='1') && (arr[i]<='9')) || ((arr[i]>='A') && (arr[i]<='Z'))){
        ch.push_back(arr[i]);
}
    }
for(int i=0;i<arr.size();i++){
    cout<<arr[i];

}
cout<<endl;
}
void tolower(char ch,int s1){
    for(int i=0;i<s1;i++){
        if(((ch[i]>='a') && (ch[i]<='z')) || ((ch[i]>='1') && (ch[i]<='9'))){
           ch[i]=ch[i];
        }
        else if(((ch[i]>='A') && (ch[i]<='Z'))){
            ch[i]=ch[i]-'A'+'a';
        }
        }
  //to check if it is converted or not
      for(int i=0;i<s1;i++){
        cout<<ch[i];
    }
    cout<<endl;
}
bool palindrome(vector<char>ch){
    int s=0;
    int e=ch.size()-1;
    int i=0;
   
    while(s<=e){
        if(ch[s]!=ch[e]){
            return 0;
        }else if(ch[s]==ch[e]){
            s++;
            e--;
        }
    }
    
  
    return 1;
}
int main(){
    char arr[100];
    cout<<"enter arr of char: "<<endl;
    cin>>arr;
    cout<<"arr of char :"<<arr<<endl;
    int x=size(arr);
    cout<<"size: "<<x<<endl;
    valid(arr,x);
      tolower(q,s1);
      cout<<endl;
    // cout<<"is palindrome or not: "<<y;
    return 0;
}