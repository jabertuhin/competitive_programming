#include <bits/stdc++.h>
using namespace std;
 
int dp[1010][1010];
int arr[1010],n,k;
 
int solve(int i,int sum){
	if(i >= n) return (sum<=k)? sum:-(1<<28);
	if(sum>k) return -(1<<28);
	if(dp[i][sum] != -1) return dp[i][sum];
	int ans = -(1<<28);
	ans = max(solve(i+2,arr[i]+sum),solve(i+1,sum));
	dp[i][sum] = ans;
	return ans;
}
 
int main() {
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		scanf("%d%d",&n,&k);
		memset(dp,-1,sizeof(dp));
		for(int j=0;j<n;j++ ){
			scanf("%d",&arr[j]);
		}
		printf("Scenario #%d: %d\n",i,solve(0,0));
	}
	return 0;
} 