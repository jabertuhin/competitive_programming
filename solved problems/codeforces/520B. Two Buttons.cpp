/*
Used Bfs to solve this problem. Every new state is a node. And connected with (it's position - 1)  and (it's position*2)
And couting or storing it's depth or level in a visiting array. When I am hitting my dfestination node which is m,I am returning
it's level.
*/
#include <bits/stdc++.h>
using namespace std;

#define mx 100010

int bfs(int src,int des){
	int vis[mx];
	memset(vis,0,sizeof(vis));
	queue<int> q;
	q.push(src);
	vis[src] = 0;	
	while(!q.empty()){
		int u = q.front();		
		q.pop();
		if(u-1>=1 && vis[u-1] == 0){
			q.push(u-1);
			vis[u-1] = vis[u]+1;
			if(u-1 == des) break;
		}
		if(2*u<=2*des && vis[2*u] == 0){
			q.push(u*2);
			vis[2*u] = vis[u]+1;
			if(u*2 == des) break;
		}
	}
	return vis[des];
}

int main() {
	int n,k;
	scanf("%d%d",&n,&k);	
	printf("%d\n",bfs(n,k));
	return 0;
}