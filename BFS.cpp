#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

const int mx=1e4+123;
vector<int> adj[mx];
int level[mx];

void bfs(int source_node){
    memset(level,-1, sizeof(level));
    level[source_node]=0;

    queue<int>q;
    q.push(source_node);

    while (!q.empty()){
        int u=q.front();
        cout<<u<<" ";
        q.pop();

        for(auto v:adj[u]){
            if(level[v]==-1){
                level[v]=level[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    optimize();

    int T;
    cin>>T;

    while (T--){
        for(int i=0;i<mx;i++){
            adj[i].clear();
        }

        int Node,Edge;
        cin>>Node>>Edge;

        for(int i=1;i<=Edge;i++){
            int u,v;
            cin>>u>>v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs(0);
        cout<<endl;
        cout<<level[Node]<<endl;
    }
    return 0;
}
