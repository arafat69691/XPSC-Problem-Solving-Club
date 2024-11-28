/*
Author: Yeasin Arafat
Source: https://codeforces.com/problemset/problem/1922/A
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
        bool check = false;
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        for(int i = 0 ; i<n ; i++)
        {
            if(a[i]!=c[i]&&b[i]!=c[i])
            {
                check =true;
            }
        
        }
        if(check ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
    return 0;
}