/*
Author: Yeasin Arafat
Date:
Source: https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin>>n>>m;
    int cnt= 0;
    for(int i = n ; i<=m ; i++)
    {
        cnt++;
    }  
    cout<<cnt;
    return 0;
}