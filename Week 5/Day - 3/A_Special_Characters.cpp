/*
Author: Yeasin Arafat
Source: https://codeforces.com/problemset/problem/1948/A
*/

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a;
    cin>>a;
    if(a%2) 
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i = 1 ; i<=a/2 ; i++)
    {
        if(i%2) cout<<"AA";
        else cout<<"BB";
    }
    cout<<endl;
}
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t;
     cin>>t;
     while(t--)
     {
        solve();
     }
    return 0;
}