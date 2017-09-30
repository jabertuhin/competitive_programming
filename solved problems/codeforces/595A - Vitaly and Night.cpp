#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int ans = 0;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			int a,b;
			scanf("%d%d",&a,&b);
			if(a+b) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}