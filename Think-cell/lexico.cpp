#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
      int n;
      cin>>n;
      vector<int> v;
      for(int i=0;i<n;i++){
        int tt;
        cin>>tt;
        v.push_back(tt);
      } 
      int j=1; 
      for(int i=0;i<n;i++){
        v[i]=v[i]+j;
        j++;
      }
      sort(v.begin(),v.end(),greater<int>());
      for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
      }
     }
}