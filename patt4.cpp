#include<iostream>
using namespace std;
int main(){
int n,m;
int k=1;
cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}



    return 0;
}
// 1 2 3 
// 4 5 6 
// 7 8 9 