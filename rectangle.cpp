#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
     while(t--){
         int a, b;
	    cin >> a >> b;
	    if (a > b) {
	        swap(a, b);
	    }
	    if (((a % 2 == 1) && (b % 2 == 1)) || ((a % 2 == 1) && (b == 2 * a))) {
	        cout << "No\n";
	    } else {
	        cout << "Yes\n";
	    }
	}  
     }
