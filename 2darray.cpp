//input and output 
#include<iostream>
using namespace std;
int main(){
    cout<<"enter row and column : "<<endl;
    int m,n;
    cin>>m>>n;
    int a[m][n];
    cout<<"enter ele: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"row wise input: "<<endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"column wise input: "<<endl;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}