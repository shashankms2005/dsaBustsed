#include<iostream>
using namespace std;
int main(){
int n;
int k=1;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<k<<" ";
        k++;
        
    }
    cout<<endl;
}



    return 0;
}

// 1        
// 2 3      
// 4 5 6    
// 7 8 9 10

