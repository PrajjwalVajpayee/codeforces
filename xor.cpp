#include<bits/stdc++.h>
using namespace std;
long long minAbsXORDifference(long long a, long long b, long long p) {
    long long x = 0;
    for (int i = 62; i >= 0; --i) {
        if ((a & (1LL << i)) != (b & (1LL << i))) {
            if ((1LL << i) <= p) {
                x |= (1LL << i);
            } else {
                break;
            }
        }
    }
    return abs((a ^ x) - (b ^ x));
}
long long smallestXORDifference(long long a, long long b, long long r) {
    long long x = min(max(a, b) - r, min(a, b));
    long long result = minAbsXORDifference(a,b,r);
    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
 long long p, q, r;
        cin >> p >> q >> r; 
        long long result = smallestXORDifference(p, q, r);
        cout << result << endl;
    }}