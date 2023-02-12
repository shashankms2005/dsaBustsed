#include<iostream>
#include<vector>
using namespace std;
vector<char>ch;
vector<char>low;
int size(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
 bool valid(char x){
    if(((x>='a') && (x<='z')) || ((x>='1') && (x<='9')) || ((x>='A') && (x<='Z'))){
  return 1;
    }
    return 0;
 }
bool tolower(char m){
        if(((m>='a') && (m<='z')) || ((m>='1') && (m<='9'))){
       return 1;
        }
        return 0;
}

bool palindrome(vector<char>l){
    int s=0;
    int e=l.size()-1;
    int i=0;
    while(s<=e){
        if(l[s]!=l[e]){
            return 0;
        }else if(l[s]==l[e]){
            s++;
            e--;
        }
    }  
    return 1;
}
int main(){
    char arr[100];//does not count enter,space ,tab || '\0' act as terminator
    cout<<"enter arr of char: "<<endl;
    cin>>arr;
    cout<<"arr of char :"<<arr<<endl;
    int x=size(arr);//in array of char no need to send size(no compulsion)
    cout<<"size: "<<x<<endl;
    for(int i=0;i<x;i++){
        if(valid(arr[i])){
       ch.push_back(arr[i]);
        }
    }
    cout<<endl;
    for(int i=0;i<ch.size();i++){
        cout<<ch[i];
    }
    for(int i=0;i<ch.size();i++){
    if(tolower(ch[i])){
        low.push_back(ch[i]);
    }
    else{
        char w=ch[i]+32;
        low.push_back(w);
    }
    }cout<<endl;
    for(int i=0;i<low.size();i++){
        cout<<low[i];
    }
   bool y=palindrome(low);
  cout<<" "<<"is palindrome or not: "<<y;
    return 0;
}