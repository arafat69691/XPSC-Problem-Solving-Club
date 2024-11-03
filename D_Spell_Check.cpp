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
        string s ;
        cin>>s;
       
         sort(s.begin(),s.end());
        if(n!=5)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(s=="Timru")
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;



        // if()cout<<"YES"<<endl;
        // else if()cout<<"YES"<<endl;
        // else if()cout<<"YES"<<endl;
        // else if()cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
     }
    return 0;
}