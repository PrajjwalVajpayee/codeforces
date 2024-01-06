#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=n/2;
    if(n==1||n==2)
       cout<<0<<endl;
   
       else if(a[p]>=a[p+1]){
        cout<<0<<endl;
    }
    else{
        cout<<a[p]<<endl;
    }}}