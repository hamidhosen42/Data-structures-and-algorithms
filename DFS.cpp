#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=112;
bool vis[mx];
vector<int> adj[mx];

void dfs(int u){
    vis[u]=1;
    cout<<u<<" ";
    for(auto v:adj[u]){
        if(vis[v]==0){
            dfs(v);
        }
    }
    return;
}

int main()
{
    optimize();
    
    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[2].push_back(5);
    adj[5].push_back(2);
    
    dfs(1);//1 call 

    return 0;
}
