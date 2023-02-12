#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter a num:  "<<endl;
    int n;
    cin>>n;
    vector<bool>prime(n+1,true);
    vector<int>ans;
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans.push_back(i);
        }
        for(int j=i*2;j<n;j=j+i){
            prime[j]=false;
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}