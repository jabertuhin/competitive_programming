#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	scanf("%d",&num);
	((num & 1) || num == 2)? cout<<"NO" : cout<<"YES";
	cout<<endl;
	return 0;
}