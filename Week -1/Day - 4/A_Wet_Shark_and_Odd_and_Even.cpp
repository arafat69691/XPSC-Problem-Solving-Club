/*
Author: Yeasin Arafat
Date:
Source:
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n;
     cin>>n;
     deque<long long> ar(n);
     for(int i = 0 ;i<n ; i++)
     {
        cin>>ar[i];
     }

     long long  sum= 0;
     for(int i = 0 ;i<n ; i++)
     {
        sum+=ar[i];
     }
     if(sum%2!=0)
     {
        auto mn = min_element(ar.begin(), ar.end());
        sum = sum-*mn;
     }
     cout<<sum;
    return 0;
}