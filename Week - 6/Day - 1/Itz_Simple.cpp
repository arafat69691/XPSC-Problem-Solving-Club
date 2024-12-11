/*
 Author : YEASIN ARAFAT
 DATE : 
 SOURCE : 
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q; 

    while (q--) {
        int a, d, s;
        cin >> a >> d >> s;
        vector<int> vec(a);
        for (int i = 0; i < a; i++) {
            cin >> vec[i]; 
        }

       
        sort(vec.begin(), vec.end());

        int Chair = 0;

        for (int i = 0; i < a - 1; ++i) {
            Chair += vec[i]; 
        }
        int m = vec[a-1];
        // int chair = m;

       
        int Height = d + m;
        int height1 = s + Chair;

         if (height1 > Height)
          {
            cout << "Varun" << endl;
        }
        else if (Height > height1) 
        {
            cout << "Ved" << endl;
        }
         
        else 
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}
