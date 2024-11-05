/*
Author: Yeasin Arafat
Source:
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
         string s,p;
        for(int i = 0 ;i<n; i++)
        {
           
            cin>>s>>p;
        }
        int flag = 0,flag1=0;
        for(int i = 0 ; i<n ; i++)
        {
            if(s[i]!='G' && p[i]!='B'){
                flag++;
            }
            if(s[i]!='G' && s[i]!='B')
            {
                flag1++;
            }
        }
        if(flag==flag1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
    return 0;
}