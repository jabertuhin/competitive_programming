#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int a,b,c,ans = 0;
	for(int i = 1;i<=n;i++){
		scanf("%d%d%d",&a,&b,&c);
		if((a+b+c)>=2) ans++;
	}
	cout<<ans<<endl;
	return 0;
}