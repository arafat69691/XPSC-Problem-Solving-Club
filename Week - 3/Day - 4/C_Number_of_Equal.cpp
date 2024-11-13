/*
 Author : YEASIN ARAFAT
 SOURCE : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   vector<int> a(n), b(m);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }
   for (int i = 0;i < m;i++) {
      cin >> b[i];
   }

   int l = 0, r = 0;
   long long res = 0;



   while (l < n && r < m) {
      int pos = a[l], cnt1 = 0, cnt2 = 0;
      while (l < n && a[l] == pos) {
         cnt1++;
          l++;
      }
      while (r<m && pos>b[r]) {
         r++;
      }
      while (r < m && b[r] == pos) {
         cnt2++, r++;
      }
      res += (1LL * cnt1 * cnt2);
   }

   cout << res << '\n';

   return 0;
}