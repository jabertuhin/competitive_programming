#include <bits/stdc++.h>
    using namespace std;
     
    long long int dp[10][2][100];
    string num;
     
    long long int solve(int pos,int top,int sum){
    	if(pos == num.size()) return sum;
    	if(dp[pos][top][sum]!=-1) return dp[pos][top][sum];
    	long long int ans = 0;
    	int lim = top? num[pos]-'0': 9;
    	for(int i = 0;i<=lim;i++){
    		ans += solve(pos+1,top&&(i == lim),sum+i);
    	}
    	return dp[pos][top][sum]=ans;
    }
     
    int main() {
    	string a,b;
    	while((cin>>a>>b) && (a != "-1" && b != "-1")){
    		//cout<<a<<" "<<b<<endl;
    		int szA = a.size(),szB = b.size();
    		memset(dp,-1,sizeof(dp));
    		num = a;
    		long long int left = solve(0,1,0);
    		memset(dp,-1,sizeof(dp));
    		num = b;
    		long long int right = solve(0,1,0);
    		int temp = 0;
    		for(int i = 0;i<szA;i++){
    			temp += a[i]-'0';
    		}
     
    		cout<<(right - left+temp)<<endl;
    	}
    	return 0;
    } 