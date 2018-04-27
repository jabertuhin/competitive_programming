#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int mn = min(a,b);
	long long int ans = 1;
	for(int i = 1;i<=mn;i++){
		ans *= i;
	}
	printf("%lld\n",ans);
	return 0;
}