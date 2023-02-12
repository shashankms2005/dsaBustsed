#include<iostream>
using namespace std;
int apn(int n){
    return 3*n+7;
}
int main(){
    int n;
    cin>>n;
    int ans=apn(n);
    cout<<ans<<endl;
    return 0;

}