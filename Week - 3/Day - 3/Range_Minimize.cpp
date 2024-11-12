/*
Author: Yeasin Arafat
Source: https://www.codechef.com/problems/MNR?tab=statement
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
    int ans = INT_MAX;
        vector<int>a=v;
        
        a.pop_back();
        a.pop_back();
        ans = min(a.back()-a.front(),ans);
        a=v;
        ans= min(a.back()-a[2],ans);
        ans = min(a[n-2] - a[1],ans);
        cout<<ans<<endl;
     }
    return 0;
}