#include<bits/stdc++.h>
using namespace std;

bool canSurvive(int n, int k, vector<int>& monster_health, vector<int>& monster_positions) {
    // Sort monsters based on positions
    sort(monster_positions.begin(), monster_positions.end());

    // Simulate the game process
    for (int i = 0; i < n; ++i) {
        int distance_to_character = monster_positions[i]; // Distance to character
        int bullets_needed = min(k, monster_health[i]); // Bullets needed to kill the monster
        k -= bullets_needed; // Update available bullets

        if (k <= 0) // No bullets left
            return false;

        // Calculate the new distance of the monster after firing
        monster_positions[i] -= bullets_needed;

        // Check if the monster reaches or passes the character
        if (monster_positions[i] <= 0)
            return false;
    }

    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
          int tt;
          cin>>tt;
          a.push_back(tt);
    }

    for (int i = 0; i < n; ++i) {
        int tt;
          cin>>tt;
          b.push_back(tt);
    }

    if (canSurvive(n, k, a, b)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    }
    return 0;
}

