/*
Author: Yeasin Arafat
Source: https://www.codechef.com/problems/CHOLY
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int x,y,z;
     cin>>x>>y>>z;
     float d = y*.5;
     float me = x+d;
     float op = z+d;
     float remain = 4- (x+y+z);
     me+=remain;
     if(me>op)cout<<"YES";
     else cout<<"NO";
    //  cout<<me<<"->"<<op<<" "<<d;
    return 0;
}