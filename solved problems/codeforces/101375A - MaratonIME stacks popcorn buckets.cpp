#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	unsigned long long ans = (n*(n+1))/2.0 - (n-1);
	cout<<ans<<endl;
	return 0;
}