#include<iostream>
using namespace std;
void reverse1(string &s,int i,int j){
    //base case
    if(i>j)
    return;

        if(i<=j)
        swap(s[i++],s[j--]);

      return reverse1(s,i,j);
}

bool palindrome(string s,int i,int j){
    //base case
     if(i>j)
     return true;

     if(s[i]!=s[j]){
        return false;
     }else{
    return palindrome(s,i+1,j-1);
}
}
int pow(int a,int b){
    int ans=0;
    //base case
    if(b==0)
    return 1;
    if(b==1)
    return a;

    ans=pow(a,b/2);

    if(b%2==0){
       return ans*ans;
    }else{
        return a*ans*ans;
    }
}
int main(){
    string s;
    cout<<"enter a string: "<<endl;
    cin>>s;
    string y=s;
    int l=s.length()-1;
      reverse1(s,0,l);
    cout<<"reversed string: "<<s<<endl;
    cout<<endl;

    if(y==s){
        cout<<"its palindrome! "<<endl;
    }else{
        cout<<"not a palindrome! "<<endl;
    }
    cout<<endl;

    if(palindrome(s,0,l)){
        cout<<"pali";
    }else{
        cout<<"not pali";
    }
    cout<<endl;

    int a,b;
    cout<<"enter a num and its pow: "<<endl;
    cin>>a>>b;
    int ans=pow(a,b);
    cout<<"power: "<<ans;

    return 0;
}