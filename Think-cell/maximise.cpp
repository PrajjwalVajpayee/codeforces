#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
       int n;
       cin>>n;
       int a=2*n;
       vector<int> v;
       for(int i=0;i<a;i++){
           int tt;
           cin>>tt;
           v.push_back(tt);
       } 
       sort(v.begin(),v.end());
       int score=0;
       for(int i=0;i<a-1;i+=2){
        score+=min(v[i],v[i+1]);
       }
       cout<<score<<endl;
     }
}