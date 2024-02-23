#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
       string s;
       cin>>s;
       map<int,int>mp;
       for(int i=0;i<s.size();i++){
        mp[s[i]]++;
       } 
       int m=0;int n=0;
       for(auto i: mp){
        if( i.first == 'A'){
            m+=i.second;
        }
        else if(i.first == 'B'){
          n+=i.second;
        }
       }
       if(m>n)
         cout<<'A'<<endl;
        else{
            cout<<'B'<<endl;
        } 
     }
}