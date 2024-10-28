/*
Author: Yeasin Arafat
Date:
Source:
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n,m,p;
    cin>>n>>m>>p;
    int cnt = 0;
    int biscuit = (p+.5)/n;
    cout<<biscuit*m;
    return 0;
}