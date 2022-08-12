#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
vector<pair<int, int>> adj[mx];
int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=1;i<m;i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"Adj nodes of node "<<i<<" : ";
        for(auto u: adj[i]){
            cout<<"Node : "<<u.first<<" "<<"Weight : "<<u.second<<endl;
        }
        cout<<endl;
    }
}
