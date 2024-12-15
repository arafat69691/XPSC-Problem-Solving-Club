#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test; 

    while (test--) {
        long long int   seat, q, b, s;
        cin >> seat >> q >> b >> s;

        
        long long int r = min(q, seat);
        long long int c = min(b, seat);

       
        long long int totSeat = 2 * seat - r - c;
        long long int  minseat = min(s, totSeat);
        
        
        long long int res = r + c + minseat;
        cout << res << endl;
    }

    return 0;
}
