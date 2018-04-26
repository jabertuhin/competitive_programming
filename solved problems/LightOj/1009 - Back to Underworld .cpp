#include <bits/stdc++.h>
using namespace std;

#define mx 20009

vector<int> graph[mx];
int  vis[mx],n;

int bfs(int src){
    int black = 0,white = 0;
    vis[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int u = q.front();
        (vis[u] == 1)? black++:white++;
        q.pop();
        int sz = graph[u].size();
        for(int i = 0;i<sz;i++){
            int v = graph[u][i];
            if(vis[v] == -1){
               vis[v] = 1 - vis[u];
               q.push(v);
            }
        }
    }
    return max(white,black);
}


void clr(){
    for(int i = 1;i<=mx;i++){
        graph[i].clear();
    }
}
int main(){
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        memset(vis,-1,sizeof(vis));
        scanf("%d",&n);
        int u,v;
        set<int> s;
        for(int j = 1;j<=n;j++){
            scanf("%d%d",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
            s.insert(u),s.insert(v);
        }
        set<int>::iterator it;
        int ans = 0;
        for(it = s.begin();it != s.end();it++){
            int val = *it;
            if(vis[val] == -1){
                ans += bfs(val);
            }
        }
        printf("Case %d: %d\n",i,ans);
        clr();
    }
    return 0;
}
