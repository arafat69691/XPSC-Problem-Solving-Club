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
        map<string,vector<int>> mp;
        for(int i = 0 ;i<3; i++)
        {
            for(int k = 0 ; k<n ; k++)
            {
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }

        // for(auto [x,v] : mp)
        // {
        //     cout<<x<<" ";
        //     for(auto val : v)
        //     {
        //         cout<<val<<" ";
        //     }
        //     cout<<endl;
        // }

        vector <int> ans(4);
        for(auto [x,y] : mp)
        {
            vector<int> v =y;
        
                if(v.size()==1)
                {
                    ans[v[0]] += 3;

                }
                if(v.size()==2)
                {
                    ans[v[0]]++;
                    ans[v[1]]++;
                }
                     
        }
        for(int i = 0 ; i<3; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
     }
    return 0;
}



/*
 for(auto val : mp)
        {
            string x = val.first;
            vector<int> y =  val.second;
            for(auto v : y)
            {
                if(v.size()==1)
                {
                    ans[v[0]] +=3;
                    
                }
            }
        }

*/