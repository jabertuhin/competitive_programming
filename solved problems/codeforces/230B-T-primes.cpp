#include <bits/stdc++.h>
using namespace std;

void ans(long long int a){
	int cnt = 2,sq = ceil(sqrt(a));
	for(int i = 2;i<=sq;i++){
		if(a%i == 0) cnt++;
		if(cnt>3) break;
	}
	(cnt==3)? printf("YES\n"):printf("NO\n");
}

int main() {
	int n;
	scanf("%d",&n);
	long long int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		ans(arr[i]);
	}
	
	return 0;
}