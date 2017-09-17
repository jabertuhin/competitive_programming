#include <bits/stdc++.h>

using namespace std;

#define mx 100010

vector<int> graph[10];
int vis[mx],sz;
string line;

int bfs(int src,int des){
    vis[src] = 0;
    queue<int> q;
    q.push(src);
    int ret = -1;
    while(!q.empty()){
        int pos = q.front();q.pop();
        if(pos == des){
            ret = vis[pos];
            break;
        }
        int ch = line[pos]-'0';
        int len = graph[ch].size();
        for(int i = 0;i<len;i++){
            if(vis[graph[ch][i]] == -1){
               vis[graph[ch][i]] = vis[pos] + 1;
               q.push(graph[ch][i]);
               if(graph[ch][i] == des) return vis[graph[ch][i]];
            }
        }
        graph[ch].clear();
        if((pos+1)<sz && vis[pos+1] == -1){
            vis[pos+1] = vis[pos] + 1;
            q.push(pos+1);
            if(pos+1 == des) return vis[pos+1];
        }
        if((pos-1)>=0 && vis[pos-1] == -1){
            vis[pos-1] = vis[pos] + 1;
            q.push(pos-1);
            if(pos-1 == des) return vis[pos-1];
        }
    }
    return ret;
}

int main(){
    cin>>line;
    sz = line.size();
    for(int i = 0;i<sz;i++){
        int c = line[i]-'0';
        graph[c].push_back(i);
    }
    memset(vis,-1,sizeof(vis));
    printf("%d\n",bfs(0,sz-1));
    return 0;
}
