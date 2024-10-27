/*
Author: Yeasin Arafat
Date:
Source: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    int multiple = b/c*c;
    // cout<<multiple;

    if(a<=multiple && b>=multiple)
    {
        cout<<multiple;
    }
    else cout<<"-1";

    return 0;
}