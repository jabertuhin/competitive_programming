#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	scanf("%d%d",&n,&t);
	int arr[n+1],vis[n+1];
	memset(vis,0,sizeof(vis));
	memset(arr,-1,sizeof(arr));
	for(int i = 1;i<n;i++){
		int a;
		scanf("%d",&a);
		arr[i] = i+a;
	}
	queue<int> q;
	q.push(1);
	vis[1] = 1;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		if(arr[u]!= -1 && !vis[arr[u]]){
			q.push(arr[u]);
			vis[arr[u]] = 1;
		}
	}
	(vis[t])? printf("YES\n"):printf("NO\n");
	return 0;
}