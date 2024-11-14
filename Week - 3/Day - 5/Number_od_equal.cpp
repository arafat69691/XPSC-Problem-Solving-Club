/*
Author: Yeasin Arafat
Source: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n,m;
     cin>>n>>m;
     vector<int>a(n),b(m);
     for(int i = 0 ; i<n ; i++)
     {
        cin>>a[i];
     }
     for(int i = 0 ; i<m ; i++)
     {
        cin>>b[i];
     }
        int l = 0,r=0;
        long long ans = 0;
     while(l<n && r<m)
     {
        int cur = a[l];
        int cnt=0,cnt1=0;
        while(l<n && cur==a[l])
        {
            cnt++,l++;
        }
            // cout<<"a - >"<<cnt<<endl;

        while(r<m && cur>b[r]) r++;


        while(r<m && cur==b[r])
        {
            cnt1++,r++;
        }
            // cout<<"b - >"<<cnt1<<endl;

        ans += (1LL* cnt*cnt1);
     }
      cout<<ans<<endl;
    return 0;
}