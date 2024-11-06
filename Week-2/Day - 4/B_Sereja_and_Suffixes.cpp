/*
Author: Yeasin Arafat
Source:
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n,m;
     cin>>n>>m;
     vector<int>v(n);
     for(int i = 0; i< n ; i++)
     {
        cin>>v[i];
     }
     for(int i = 0 ; i<m ; i++)
     {
        int pos;
        cin>>pos;
        set<int>s;
        for(int j = pos ; j<n; j++)
        {
            s.insert(v[j]);
        }
        cout<<s.size()<<endl;
     }
    return 0;
}