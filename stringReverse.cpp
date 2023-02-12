#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char s[1000];
void reversestring(char s[],int l){
    int start=0;
    int k=0;
   for(int i=0;i<=l;i++){
    if((s[k]==' ') || (s[k]=='\0')){
  int end=k-1;

  while(start<=end){
    swap(s[start],s[end]);
        start++;
        end--;
    }
      
    start=k+1;
  }
  k++;
   }
 
 
   for(int i=0;i<l;i++){
    cout<<s[i];
   }
}
int main(){
    cout<<"enter a string: "<<endl;
    cin.getline(s,1000);
    int l=strlen(s);
   reversestring(s,l);
    return 0;
}