#include <bits/stdc++.h>
using namespace std;
 
int sum(int a[],int len){
	if(len == 0) return a[len];
	return a[len] + sum(a,len-1);
}
 
int main() {
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int j = 0;j<n;j++){
			scanf("%d",&arr[j]);
		}
		printf("Case %d: %d\n",i,sum(arr,n-1));
	}
	return 0;
} 