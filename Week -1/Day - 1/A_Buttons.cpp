/*
Author: Yeasin Arafat
Date:
Source: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    if(a>b) 
    {
        cnt += a;
        a--;
    }
    else
    {
        cnt+=b;
        b--;
    }
    if(a>b)
    {
        cnt+=a;
        a--;
    }
    else{
        cnt+=b;
        b--;
    }
    cout<<cnt;
    return 0;
}