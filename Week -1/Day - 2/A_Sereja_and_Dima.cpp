#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int sreja = 0, dima = 0;
    int l = 0, r = n - 1; 
    int turn = 1;

    while (l <= r) {
        if (turn%2==1) {
            
            if (ar[l]<ar[r]) {
                sreja += ar[r];
                r--;
            } else {
                sreja += ar[l];
                l++;
            }
            
        } 
        else
         {
            
            if (ar[l]<ar[r]) {
                dima += ar[r];
                r--;
            } else {
                dima += ar[l];
                l++;
            }
            
        }
        turn++;
        
    }

    cout << sreja << " " << dima << endl;

    return 0;
}
