/*
Author: Yeasin Arafat
Source: https://codeforces.com/problemset/problem/1702/C
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
        map<int,set<int>>mp;
        int n,m;
        cin>>n>>m;
        for(int i = 1; i<=n; i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        for(int i = 1;i<=m ; i++)
        {
            int x,y;
            cin>>x>>y;

            if((mp.find(x)==mp.end()) || (mp.find(y))==mp.end())
            {
                cout<<"NO"<<endl;
            }
            else 
            {
                int leftPos,rightPos;
                leftPos = *mp[x].begin();
                rightPos = *mp[y].rbegin();
                if(leftPos<rightPos)
                {
                    cout<<"YES"<<endl;
                }
                else cout<< "NO"<<endl;
            }
        }
     }
     
    return 0;
}