#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=n/2;
    bool f=true;
    int b=0;
    for(int i=0;i<p+1;i++){
        if(a[p]<a[p+1]){
            f=false;
            b=a[p];
        }
    }
    if(f){
        cout<<0<<endl;
    }
    else{
        cout<<b<<endl;
    }
    }
    }