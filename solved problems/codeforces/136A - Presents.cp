#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	
	int arr[n+1];
	memset(arr,0,sizeof(arr));
	
	int friendNum;
	
	for(int i = 1;i<=n;i++){
		scanf("%d",&friendNum);
		arr[friendNum] = i;
	}
	
	printf("%d",arr[1]);
	for(int i = 2;i<=n;i++){
		printf(" %d",arr[i]);
	}
	printf("\n");
	
	return 0;
}