/*
Simple implementation of Binary Indexed Tree
*/


#include <bits/stdc++.h>
using namespace std;

#define mx 100010
int tree[mx],n;

void update(int x,int val){
	for(;x<=n; x+=(x & (-x))){
		tree[x]+= val;
	}
}

int query(int x){
	int sum = 0;
	for(;x>0;x-=(x & (-x))){
		sum += tree[x];
	}
	return sum;
}

int main() {
	memset(tree,0,sizeof(tree));
	scanf("%d",&n);
	int arr[n+1];
	for(int i = 1;i<=n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2 == 0) update(i,1);
	}
	int quer;
	scanf("%d",&quer);
	for(int i = 1;i<=quer;i++){
		int instr,x,y;
		scanf("%d%d%d",&instr,&x,&y);
		if(instr == 0){
			if(arr[x]%2 == 0 && y%2 != 0){
				update(x,-1);
			}else if(arr[x]%2 != 0 && y%2 == 0){
				update(x,1);
			}
			arr[x] = y;
		}else if(instr == 1){
			printf("%d\n",query(y)-query(x-1));
		}else{
			int ans = (y-x+1)-(query(y)-query(x-1));
			printf("%d\n",ans);
		}
	}
	return 0;
}