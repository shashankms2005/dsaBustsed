#include<iostream>
using namespace std;
void rowsum(int a[][4]){
     for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=a[i][j];
        }
        cout<<sum<<endl;
}
}
void columnsum(int a[][4]){
     for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=a[j][i];
        }
        cout<<sum<<endl;
}
}
void largestrowsum(int a[][4]){
    int maxi=INT32_MIN;
        for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=a[i][j];
        }
      if(maxi<sum){
        maxi=sum;
      } 
} 
cout<<"largest row sum: "<<maxi;
}
int main(){
    int a[4][4];
    cout<<"enter ele: "<<endl;
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
     }
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
      }
     rowsum(a);
     cout<<endl;
     columnsum(a);
     cout<<endl;
     largestrowsum(a);
    return 0;
}