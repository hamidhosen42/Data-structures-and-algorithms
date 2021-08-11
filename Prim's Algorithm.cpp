#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

#define INF 999999
#define V 5
int sum=0;

int G[V][V] = {
        {0, 9, 75, 0, 0},
        {9, 0, 95, 19, 42},
        {75, 95, 0, 51, 66},
        {0, 19, 51, 0, 31},
        {0, 42, 66, 31, 0}};

int main() {
    int no_edge;


    int selected[V];

    memset(selected, false, sizeof(selected));

    selected[0] = true;

    int x;
    int y;

    cout<<"Edge : Weight"<<endl;

    while (no_edge < V - 1) {
        int min = INF;
        x = 0;
        y = 0;

        for (int i = 0; i < V; i++) {
            if (selected[i]) {
                for (int j = 0; j < V; j++) {
                    if (!selected[j] && G[i][j]) {
                        if (min > G[i][j]) {
                            min = G[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        sum+=G[x][y];
        cout<<x<<" - "<<y<<":"<<G[x][y]<<endl;
        selected[y] = true;
        no_edge++;
    }
    cout<<"Minimum Cost:"<<sum<<endl;

    return 0;
}
/*
0 1 9
0 2 75
1 0 9
1 2 95
1 3 19
1 4 42
2 0 75
2 1 95
2 3 51
2 4 66
3 1 19
3 2 51
3 4 31
4 1 42
4 2 66
4 3 31
*/
