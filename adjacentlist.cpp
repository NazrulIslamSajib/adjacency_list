#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n,i,m;
     cin>>n>>m;
     vector<pair<long long,long long>>v[10000];
     for(i=1;i<=m;i++)
     {
         int a,b,c;
         cin>>a>>b>>c;
         v[a].push_back({b,c});
         v[b].push_back({a,c});
     }
     for(i=0;i<n;i++)
     {
         cout<<i<<"   node   =";
         for(auto x:v[i])
         {
             cout<<x.first<<"   weighted:"<<x.second<<" ";
         }
         cout<<endl;
     }
}
