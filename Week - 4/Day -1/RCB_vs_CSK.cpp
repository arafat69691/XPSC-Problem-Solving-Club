/*
Author: Yeasin Arafat
Source: https://www.codechef.com/problems/RCBCSK
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int rc,cs;
     cin>>rc>>cs;
     if((rc-cs)>=18)
     {
        cout<<"RCB";
     }
     else cout<<"CSK";
    return 0;
}