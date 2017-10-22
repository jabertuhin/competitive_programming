#include <bits/stdc++.h>
using namespace std;

#define mx 10010
int tree[mx],n;

void update(int x, int val){
      for(; x <= n; x += x&-x)
        tree[x] += val;
}

void updateRange(int l,int r,int val){
	update(l,val);
	update(r+1,-val);
}

int query(int x){
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += tree[x];
     return sum;
}

void prnt(){
	for(int i = 1;i<=n;i++){
		cout<<tree[i]<<" "; 
	}
	cout<<endl;
}

int main() {
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		memset(tree,0,sizeof(tree));
		int u;
		scanf("%d%d",&n,&u);
		for(int j = 1;j<=u;j++){
			int l,r,val;
			scanf("%d%d%d",&l,&r,&val);
			updateRange(l+1,r+1,val);
		}
		int q;
		scanf("%d",&q);
		for(int j =1;j<=q;j++){
			int point;
			scanf("%d",&point);
			printf("%d\n",query(point+1));
		}
	}
	return 0;
}
