#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	cin>>line;
	int sz = line.size(),hl = sz/2;
	int cnt = 0;
	for(int i = 0,j = sz-1;i<hl;i++,j--){
		if(line[i] != line[j]){
			cnt++;
		}
	}
	if(cnt == 1 || (sz%2== 1 && cnt==0)) printf("YES\n");
	else printf("NO\n");
	return 0;
}