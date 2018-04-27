#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	cin>>a>>b;
	reverse(a.begin(),a.end());
	(a == b)? printf("YES\n"):printf("NO\n");
	return 0;
}