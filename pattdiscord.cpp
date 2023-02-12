#include<iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int k=3;
    for(int i=1;i<=n;i++){
        int n=(i*i*i+11*i-6)/6;
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n=n+2;
        
        }
        cout<<endl;
    }
    
    return 0;
}