#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            ch='A'+i+j-2;
            
            cout<<ch;
          
      ch++;
       
        }
      
      cout<<endl;
    }

    


    return 0;
}
// A   
// BC  
// CDE 
// DEFG