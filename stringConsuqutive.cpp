#include<iostream>
#include<vector>
using namespace std;
void consiqutive(string s){
   int i=0;
   int start=0;
   int end=0;
   while(i<s.length()){ 
     int j=0;
        if(s[j]==s[j+1]){
            s.erase(j,2);
            j++;
        }
        i++;
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}
int main(){
    string s;
    cin>>s;
    cout<<endl;
    consiqutive(s);
    return 0;
}