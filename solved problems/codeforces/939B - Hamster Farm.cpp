#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k;
	cin>>n>>k;
	int pos;
	long long int minRem,ans = 0,a,temp;
	cin>>a;
	temp = n%a;
	pos = 1;
	minRem = temp;
	ans = n/a;
	for(int i = 2;i<=k;i++){
		cin>>a;
		temp = n%a;
		if(temp<minRem){
			pos = i;
			minRem = temp;
			ans = n/a;
		}
	}
	cout<<pos<<" "<<ans<<endl;
	return 0;
}