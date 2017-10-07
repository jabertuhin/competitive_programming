#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,b;
	scanf("%lld%lld",&a,&b);
	long long int ans = 1;
	for(long long int i = a+1;i<=b;i++){
		ans = (ans*i)%10;
		if(ans == 0) break;
	}
	printf("%lld\n",ans);
	return 0;
}