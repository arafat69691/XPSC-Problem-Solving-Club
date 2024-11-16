/*
Author: Yeasin Arafat
Source: https://www.codechef.com/problems/DOTIFYPLAY
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
        int n,k,l;
        cin>>n>>k>>l;
        
       vector<pair<int,int>>v(n);
        for(int i = 0 ; i<n; i++)
        {
           cin>>v[i].first>>v[i].second;
        }
       sort(v.rbegin(),v.rend());
        int sum=0;
        for(int i = 0 ;i<n ; i++)
        {
            if(v[i].second==l && k!=0)
            {
                sum+=v[i].first;
                k--;
            }
        }
        if(sum==0 || k!=0) cout<<-1<<endl;
        else cout<<sum<<endl;

        
       
     }
    return 0;
}