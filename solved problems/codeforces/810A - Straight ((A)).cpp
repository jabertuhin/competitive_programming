#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,num;
	scanf("%d%d",&n,&k);
	int sum = 0;
	for(int i = 1;i<=n;i++){
		scanf("%d",&num);
		sum += num;
	}
	int av = round((sum*1.0)/n);
	int cnt = 0;
	while(av<k){
		sum += k;
		cnt++;
		av = round((sum*1.0)/(n+cnt));
	}
	cout<<cnt<<endl;
	return 0;
}