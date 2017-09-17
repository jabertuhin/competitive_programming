#include <bits/stdc++.h>
using namespace std;

#define mx 2010
vector<int> graph[mx];
int vis[mx];

int bfs(int source){
	int ret = 1;
	queue<int> q;
	q.push(source);
	vis[source] = 1;
	while(!q.empty()){
		int u = q.front();q.pop();
		int sz = graph[u].size();
		for(int i = 0;i<sz;i++){
			int v = graph[u][i];
			if(vis[v] == -1){
				vis[v] = vis[u]+1;
				q.push(v);
				ret = max(vis[v],ret);
			}
		}
	}
	return ret;
}

int main() {
	int node;
	scanf("%d",&node);
	memset(vis,-1,sizeof(vis));
	vector<int> master;
	for(int i = 1;i<=node;i++){
		int sup;
		scanf("%d",&sup);
		if(sup != -1) graph[sup].push_back(i);
		else master.push_back(i);
	}
	int sz = master.size();
	int ans = 1;
	for(int i = 0;i<sz;i++){
		ans = max(bfs(master[i]),ans);
	}
	printf("%d\n",ans);
	return 0;
}