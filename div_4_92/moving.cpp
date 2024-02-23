#include<bits/stdc++.h>
using namespace std;
int mini(int n, const vector<int>& cells) {
    int total = 0;
    int current = -1;

    for (int i = 0; i < n; ++i) {
        if (cells[i] == 1) {  // Chip found
            if (current == -1) {
                current = i;
            } else {
                total += (i - current - 1);
                current = i;
            }
        }
    }

    return total;
}
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
        int p=mini(n,v);
        cout<<p<<endl;
     }
}