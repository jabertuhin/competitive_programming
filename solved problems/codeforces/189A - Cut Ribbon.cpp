#include <bits/stdc++.h>
using namespace std;

int dp[4010];
int n,a,b,c;

int solve(int n1){
	if(n1<=0){
		return 0;
	}
	if(n1 == n){
		dp[n1] = max(dp[n1],(solve(n1-a)+1));
		dp[n1] = max(dp[n1],(solve(n1-b)+1));
		dp[n1] = max(dp[n1],(solve(n1-c)+1));
	}
	if(dp[n1] != -1) return dp[n];
	//int res = INT_MIN;
	dp[n1] = max(dp[n1],(solve(n1-a)+1));
	dp[n1] = max(dp[n1],(solve(n1-b)+1));
	dp[n1] = max(dp[n1],(solve(n1-c)+1));
	return dp[n1];
}

int main() {
	scanf("%d%d%d%d",&n,&a,&b,&c);
	memset(dp,-1,sizeof(dp));
	dp[a] = 1,dp[b] = 1,dp[c] = 1;
	printf("%d\n",solve(n));
	return 0;
}