/*
Author: Yeasin Arafat
Source: https://codeforces.com/problemset/problem/1165/B
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n;
     cin>>n;
     multiset<int>ms;
     for(int i = 0 ; i<n ; i++)
     {
        int x;
        cin>>x;
        ms.insert(x);
     }
        int day =0;
     for(int i = 1; i<=n; i++)
     {
        auto it = ms.lower_bound(i);
        if(it!=ms.end())
        {
            day++;
            ms.erase(it);
        }

     }
     cout<<day;
    return 0;
}