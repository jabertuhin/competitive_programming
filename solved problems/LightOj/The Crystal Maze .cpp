/*
Light Oj - The Crystal Maze
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
int vis[509][509],quer[1009];
int drx[] = {1,-1,0,0};
int dry[] = {0,0,1,-1};
int row,col,q;

bool chk(int r,int c,int dy,int dx){
    if((r+dy>=0 && r+dy<row) && (c+dx>=0 && c+dx<col) && (grid[r+dy][c+dx] != '#') && (vis[r+dy][c+dx]==0)){
        return true;
    }else return false;
}

int bfs(int y,int x,int val){
    vis[y][x] = val;
    queue<int> q;
    q.push(y),q.push(x);
    int ret = 0;
    while(!q.empty()){
        int r = q.front();q.pop();
        int c = q.front();q.pop();
        if(grid[r][c] == 'C') ret++;
        for(int i = 0;i<4;i++){
            if(chk(r,c,dry[i],drx[i])){
                vis[r+dry[i]][c+drx[i]] = val;
                q.push(r+dry[i]),q.push(c+drx[i]);
            }
        }
    }
    quer[val] = ret;
    return ret;
}

int main(){
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        scanf("%d%d%d",&row,&col,&q);
        memset(vis,0,sizeof(vis));
        memset(quer,-1,sizeof(quer));
        getchar();
        for(int j = 0;j<row;j++){
            string line;
            cin>>line;
            grid.push_back(line);
        }
        printf("Case %d:\n",i);
        for(int j = 1;j<=q;j++){
            int r,c;
            scanf("%d%d",&r,&c);
            r--,c--;
            if(vis[r][c] == 0){
                printf("%d\n",bfs(r,c,j));
            }else{
                printf("%d\n",quer[vis[r][c]]);
            }
        }
        grid.clear();
    }
    return 0;
}
