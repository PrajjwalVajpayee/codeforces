#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    int  sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==1){
        cout<<"YES"<<endl;
    }
    bool flag=0;
     for(int i=0;i<sum/2;i++){
        if(i*i == sum){
           flag=1;
        }
     }
     if(flag){
        cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
    }
    }