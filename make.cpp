#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
         int prev=0;

          for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                prev=i;
                break;
            }

          }
           int sum=0;
        for(int i=0;i<s.size();i++){
           
         if(s[i] == 'B'){
            sum=i;
         }   
        }
        cout<< (sum-prev)+1<<endl;
     }
}
