

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test; 

    while (test--) {
        string w;
        cin >> w; 

        reverse(w.begin(), w.end());


        for (char &v : w) {
            if (v == 'p') 
            {
                v = 'q';
            }
            else if (v == 'q') 
            {
                v = 'p';
            }
        }

        cout << w << endl; 
    }

    return 0;
}
