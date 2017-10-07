#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int arr1[n],arr2[n];
	vector<int> v;
	for(int i = 0;i<n;i++){
		scanf("%d",&arr1[i]);
		v.push_back(arr1[i]);
	}
	for(int i = 0;i<n;i++){
		scanf("%d",&arr2[i]);
		v.push_back(arr2[i]);
	}
	sort(v.begin(),v.end());
	int ans = 0;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			int temp = arr1[i]^arr2[j];
			if(binary_search(v.begin(),v.end(),temp)) ans++;
		}
	}
	(ans%2 == 0)? printf("Karen\n"):printf("Koyomi\n");
	return 0;
}