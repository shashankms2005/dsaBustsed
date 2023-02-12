#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<char>ans;
char s[10000];
void add(char s[],int l){
    int k=0;
    l=l*10;
    for(int i=0;i<=(l-1);i++){
        if(s[k]!=' '){
        ans.push_back(s[k]);
        }else{
          ans.push_back('@');
              ans.push_back('4');
                ans.push_back('0');
        }
        k++;
    }
     
   for(int i=0;i<l;i++){
    cout<<ans[i];
   }
}
int main(){
    cout<<"enter a string: "<<endl;
    cin.getline(s,1000);
    int l=strlen(s);
    add(s,l);
    return 0;
}