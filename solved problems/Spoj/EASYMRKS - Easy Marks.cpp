#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int n,k;
		scanf("%d%d",&n,&k);
		int sum = 0,a;
		for(int j = 1;j<=n;j++){
			scanf("%d",&a);
			sum += a;
		}
		int res = (k*(n+1)) - sum;
		printf("Case %d: %d\n",i,res);
	}
	return 0;
} 