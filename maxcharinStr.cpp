#include<iostream>
#include<vector>
using namespace std;
char maxchar(string s){
    int arr[26]={0};
    char ch;
    int num=0;
    for(int i=0;i<s.length();i++){
     ch=s[i];
     if((ch>='a') && (ch<='z')){
     num=ch-'a';
     }else{
        num=ch-'A';
     }
     arr[num]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
   return 'a'+ans;
}
int main(){
    string s;
    char x=0;
   cin>>s;
    cout<<endl;
  x=maxchar(s);
    cout<<x;
    return 0;
}