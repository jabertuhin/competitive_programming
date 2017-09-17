#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	vector<int> v;
	while(n != 0){
		if(n%2 == 0){
			v.push_back(2);
			n -= 2;
		}else{
			v.push_back(3);
			n -= 3;
		}
	}
	int sz = v.size();
	printf("%d\n",sz);
	printf("%d",v[0]);
	for(int i = 1;i<sz;i++) printf(" %d",v[i]);
	printf("\n");
	return 0;
}