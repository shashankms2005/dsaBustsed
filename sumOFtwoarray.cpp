#include<iostream>
#include<vector>
using namespace std;
int sum=0;
int value=0;
int carry=0;
vector<int>ans;
vector<int>Sumofarray(int a1[],int a,int b1[],int b){
    int i=a-1;
    int j=b-1;
    while(i>=0 && j>=0){
        int v=a1[i];
        int y=b1[j];
        sum=v+y+carry;
        carry=sum/10;
        value=sum%10;
        ans.push_back(value);
        i--;
        j--;
    }
    while(i>=0){
        sum=a1[i]+carry;
        carry=sum/10;
        value=sum%10;
        ans.push_back(value);
        i--;
    }
        while(j>=0){
        sum=b1[j]+carry;
        carry=sum/10;
        value=sum%10;
        ans.push_back(value);
        j--;
    }
        while(carry!=0){
        sum=carry;
        carry=sum/10;
        value=sum%10;
        ans.push_back(value);
    }
    
    
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
}
int main(){
        int arr1[100]={0};
    int size1=0;
    cout<<"enter array size: "<<endl;
    cin>>size1;
    cout<<"enter array ele: "<<endl;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<endl;
        int arr2[100]={0};
    int size2=0;
    cout<<"enter array size: "<<endl;
    cin>>size2;
    cout<<"enter array ele: "<<endl;
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    cout<<endl;
    Sumofarray(arr1,size1,arr2,size2);
    return 0;

}