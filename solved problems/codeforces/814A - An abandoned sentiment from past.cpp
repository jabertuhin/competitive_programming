#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	int arr1[n],arr2[k];
	//map<int,int> mp;
	for(int i = 0;i<n;i++) scanf("%d",&arr1[i]);
	for(int i = 0;i<k;i++){
		scanf("%d",&arr2[i]);
	}
	sort(arr2,arr2+k);
	int j = 0;
	for(int i = 0;i<n;i++){
		if(arr1[i] == 0 && j<k && arr2[j] != -1){
			arr1[i] = arr2[j];
			j++;
			arr2[j] = -1;
		}
	}
	bool chk = true;
	for(int i = 0;i<(n-1);i++){
		if(arr1[i]>arr1[i+1]) chk = false;
	}
	if(chk) printf("No\n");
	else printf("Yes\n");
	return 0;
}