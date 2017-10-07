#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int n;
		scanf("%d",&n);
		int male[n],female[n];
		for(int j = 0;j<n;j++) scanf("%d",&male[j]);
		for(int j = 0;j<n;j++) scanf("%d",&female[j]);
		sort(male,male+n);
		sort(female,female+n);
		int ans = 0;
		for(int j = 0;j<n;j++) ans += male[j]*female[j];
		printf("%d\n",ans);
	}
	return 0;
} 