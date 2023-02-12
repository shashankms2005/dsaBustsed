#include<iostream>
using namespace std;
int s=0;
int e=0;
int m=0;
int x=0;
int sa=0;
int sqrtarray(int sq){
    s=0;
    e=sq;
    m=s+(e-s)/2;
    while(s<=e){
    int x=m*m;
    if(x==m){
        return m;
    }
    else if(x<=sq){
        sa=m;
        s=m+1;
    }else{
       e=m-1;
    }
    m=s+(e-s)/2;
    }
 return sa;
}
double precision(int sq,int deci,int ans){
    double f=1;
   double a=ans;
    for(int i=0;i<deci;i++){
        f=f/10;
        for(double j=a;j*j<sq;j=j+f){
            a=j;
        }
    }
    return a;
}
int main(){
    int sq=0;
    cout<<"enter the number of which sqrt is to be found : "<<endl;
    cin>>sq;
    int ans=sqrtarray(sq);
    cout<<"sqrt: "<<ans<<endl;
    int deci=0;
    cout<<"enter precision: "<<endl;
    cin>>deci;
    double pre=precision(ans,deci,ans);
    cout<<"precise ans:"<<pre;
}