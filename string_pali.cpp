#include<iostream>
using namespace std;
bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}
char lowercase(char ch){
     if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
     }
     else{
        ch=ch+32;
     }
     return ch;
}
bool palindrome(string temp){
    int s=0;
    int e=temp.length()-1;
    while(s<=e){
        
        if(temp[s]!=temp[e]){
            return 0;
        }else if(temp[s]==temp[e]){
            s++;
            e--;
        }
    }  
    return 1;
}
int main(){
    string s="mom@@m@om";
    string temp= "";
    for(int i=0;i<s.length();i++){
        if(valid(s[i])){
            cout<<s[i];
        temp.push_back(s[i]);
        }    
    }
    cout<<endl;
    for(int i=0;i<temp.size();i++){
        temp[i]=lowercase(temp[i]);
    } 
        for(int i=0;i<temp.size();i++){
      cout<<temp[i];
    } 
    cout<<endl;
    bool y=palindrome(temp);
  cout<<"palindrome or  not: "<<y;
    return 0;
}