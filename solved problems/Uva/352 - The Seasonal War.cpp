#include <bits/stdc++.h>

using namespace std;

int drx[] = {0,0,1,-1,1,-1,1,-1};//direction array
int dry[] = {1,-1,0,0,1,1,-1,-1};//direction array

int grid[30][30];
int vis[30][30];
int n;

void bfs(int x,int y){
    vis[x][y] = 0;
    queue<int> q;
    q.push(x),q.push(y);
    while(!q.empty()){
        int u = q.front();q.pop();
        int v = q.front();q.pop();
        for(int i = 0;i<8;i++){
            if((u+drx[i]<n && u+drx[i]>=0) && (v+dry[i]<n && v+dry[i]>=0)){
                if(grid[u+drx[i]][v+dry[i]]== 1 && vis[u+drx[i]][v+dry[i]] == -1){
                    vis[u+drx[i]][v+dry[i]] = 0;
                    q.push(u+drx[i]),q.push(v+dry[i]);
                }
            }
        }
    }
}

int main()
{
	int cs = 0;
    while(scanf("%d",&n)==1){
    	cs++;
        getchar();
        for(int i = 0;i<n;i++){
            string line;
            cin>>line;
            for(int j = 0;j<n;j++){
                if(line[j] == '0'){
                    grid[i][j] = 0;
                }
                else grid[i][j] = 1;
            }
        }
        int ans = 0;
        memset(vis,-1,sizeof(vis));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(vis[i][j] == -1 && grid[i][j] == 1){
                    ans++;
                    bfs(i,j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",cs,ans);
    }
    return 0;
}
