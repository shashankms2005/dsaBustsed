#include<iostream>
using namespace std;
int nxtnum=0;
//0 1 1 2 3 5 8 .........
//1 2 3 4 5 6 7 .......(position)
int fib(int n){
    int a=0;
    int b=1;
    for(int i=1;i<(n-1);i++){
         nxtnum=a+b;
        a=b;
        b=nxtnum;

    }
    return nxtnum;
}
int main(){
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<"fibanacci number at "<<n<<"th position is"<<ans<<endl;
    return 0;
}