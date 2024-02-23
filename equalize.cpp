#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
       int n;
       cin>>n;
       vector<int> v;
       for(int i=0;i<n;i++) {
        int tt;
        cin>>tt;
        v.push_back(tt);
       }
       int j=n;
       sort(v.begin(),v.end());
       for(int i=0;i<n;i++){
        v[i]=v[i]+j;
        j--;
       }
       
       unordered_map<int,int> m;
       for(auto i:v){
        m[i]++;
       }
       int c=0;
   for(auto i: m){
    if(i.second>c){
        c=i.second;
    }
   }
   cout<<c<<endl;
     }
}