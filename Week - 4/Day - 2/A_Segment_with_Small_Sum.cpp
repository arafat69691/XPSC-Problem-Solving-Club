/*
Author: Yeasin Arafat
Source:
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n;
     long long k;
     cin>>n>>k;
     vector<int>v(n);
     int l = 0 , r= 0 ;
     long long ans = 0;
     long long sum = 0;
     for(int i = 0 ; i<n ; i++)
     {
        cin>>v[i];
     }
     while(r<n)
     {
         sum += v[r];

        if(sum<=k)
        {
            ans = (ans,r-l+1);
        }
        else{
            sum-=v[l];
            l++;
        }
        r++;
     }
     cout<<ans;
    return 0;
}