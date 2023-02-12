#include<iostream>//sort is in #include<algorithm>
#include<algorithm>
using namespace std;

int main(){
    int ar[10]={0,1,2,1,2,0,1,0,2,2};
    int len=sizeof(ar)/sizeof(ar[0]);
   sort(ar,ar+len);//for desending sort(ar,ar+n,greatest<int>())
    for(int i=0;i<len;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}  
  