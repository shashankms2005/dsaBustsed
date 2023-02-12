#include<iostream>
using namespace std;
int main(){
    int n;
   int x=1;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            
            cout<<" ";
          
    
        }for(int j=1;j<=i;j++){
            cout<<x;
            x++;
        }
        
        
      cout<<endl;
    }

    


    return 0;
}
//    1 
//   23 
//  456 
// 78910