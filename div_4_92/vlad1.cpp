#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout<<"hello world";
        int n;
        cin >> n;

        int grid[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        vector<int> dp(n,0);
        int c=0;
        for (int i = 0; i < n; i++) {
              int cc=0;
            for (int j = 0; j < n; j++) {
                if( grid[i][j]== 1)
                  cc++;
            }
            c=max(c,cc);
            dp.push_back(c);
        }
        for(int i=0;i<2;++i){
             if(dp[i]-dp[i-1]>1)
               cout<<"TRIANGLE"<<endl;
        
        else{
            cout<<"SQUARE"<<endl;
        }}
    }

    return 0;
}
