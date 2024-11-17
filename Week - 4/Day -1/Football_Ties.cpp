/*
Author: Yeasin Arafat
Source:https://www.codechef.com/problems/FOOTBALLTIES
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
        int a,b;
        cin>>a>>b;
        if(a%3==0 || b%3==0) cout<<0<<endl;
        else if(a%3==2 || b%3==2)
        {
            cout<<2<<endl;
        }
        else if(a%3==1 || b%3==1)
        {
            cout<<1<<endl;
        }
        else cout<<0<<endl;

     }
    return 0;
}