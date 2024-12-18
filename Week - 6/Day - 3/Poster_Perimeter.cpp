#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int a, p, q;
        cin >> a >> p >> q;

        int min1 = INT_MAX;

        
        for (int i = 1; i <= a; i++) {

            for (int k = 1; k <= p; k++) {
            int pr,differ;
                pr = 2 * (i + k);
                // int pr;
                 differ = abs(pr - q);
                min1 = min(min1, differ);
            }
        }

       
        cout << min1 << endl;
    }

    return 0;
}