#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		long long int n;
		scanf("%lld",&n);
		long long int ans = 192 + (n-1)*250;
		cout<<ans<<endl;
	}
	return 0;
} 