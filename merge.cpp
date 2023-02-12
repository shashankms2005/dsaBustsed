#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>a,vector<int>b){
       vector<int>c;
      int c1=0;
      int c2=0;
      int i=0;
     int j=0;
     int m=a.size();
     int n=b.size();
 while(i<m && j<n){
      if(a[i]<b[j]){
          c.push_back(a[i]);
          c1=i++;
      }else if(a[i]>b[j]){
          c.push_back(b[j]);
          c2=j++;
         }
     }
        c1++;
        while(c1<m){
           c.push_back(a[c1]);
           c1++;
        }
        c2++;
        while(c2<n){
           c.push_back(b[c2]);
        c2++;
        }
     return c;
}
void print(vector<int>ans){
    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
    }
}
int main(){
    int x=0;
    vector<int>a;
    vector<int>b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(5);
  

    b.push_back(3);
    b.push_back(4);
    b.push_back(6);
    b.push_back(8);
    b.push_back(16);

    vector<int>ans=merge(a,b);
    print(ans);
    return 0;
}