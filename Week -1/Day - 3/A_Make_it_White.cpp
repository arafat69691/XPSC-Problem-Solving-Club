/*
Author: Yeasin Arafat
Date:
Source: https://codeforces.com/problemset/problem/1927/A
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
        string s;
        cin>>s;
        int st=0,end=0;
        for(int i = 0 ; i<n ; i++)
        {
            if(s[i]=='B' && st==0)
            {
                st = i+1;
            }
            if(s[i]=='B' && st!=0)
            {
                end=i+1;
            }
        }
        int num = abs(st-end)+1;
        if(st-end==0)
        {
            num = 1;
        }
        cout<<num<<endl;
     }
    return 0;
}