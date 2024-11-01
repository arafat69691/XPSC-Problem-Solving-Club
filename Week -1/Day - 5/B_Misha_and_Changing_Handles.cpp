/*
Author: Yeasin Arafat
Source:
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n;
     cin>>n;
     map<string,string> old ;
     map<string,string> update;
     for(int i = 0; i<n ; i++)
     {
        string a,b;
        cin>>a>>b;

        if(update.find(a) != update.end())
        {
            string store = update[a];
            old[store]= b;
            update.erase(a);
            update[b] = store;
        }


      else
      {
          old[a]=b;
        update[b]=a;
      }
      
     }
     cout<<old.size()<<endl;
       for(auto val : old)
        {
            string a  = val.first;
            string b = val.second;
            cout<<a<<" "<<b<<endl;
        }
    return 0;
}