#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		(i%2 == 0)? printf("I love "):printf("I hate ");
		(i != n)? printf("that "):printf("it\n");
	}
	return 0;
}