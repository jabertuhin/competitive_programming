#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[2*n];
	for(int i = 0;i<2*n;i++) cin>>arr[i];
	sort(arr,arr+2*n,greater<int>() );
	if(arr[n-1]>arr[n]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}