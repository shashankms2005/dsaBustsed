#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(8);
      v.push_back(9);
        v.push_back(7);
          v.push_back(1);
           v.push_back(8);
          cout<<"finding 8: ";
         cout<<binary_search(v.begin(),v.end(),8);//it will only sort and do
         cout<<endl;
        cout<<lower_bound(v.begin(),v.end(),8)-v.begin()<<endl;//to find 8 last and first loc
        cout<<upper_bound(v.begin(),v.end(),8)-v.begin();
        cout<<endl;
        // we have max and min algo
        //swap()

   
        reverse(v.begin(),v.end());
             cout<<" reversed : ";
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;


   
        rotate(v.begin(),v.begin()+2,v.end());
              cout<<" rotated: ";
              for(auto i:v){
            cout<<i<<" ";
        }


    return 0;
}