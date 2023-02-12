#include<iostream>
using namespace std;
bool search(int a[][2],int k){
      for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
           if(a[i][j]==k){
            return true;
           }
        }
    }
    return false;
}
int main(){
    int a[3][2]={{45,47},{79798,4512}};
    cout<<"enter num to be searched: "<<endl;
    int k=0;
    cin>>k;
    bool y=search(a,k);
    cout<<y;
    return 0;
}