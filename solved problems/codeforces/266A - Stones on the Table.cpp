#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	string line;
	cin>>line;
	int sz = line.size(), ans = 0;
	for(int i = 0;i<sz;i++){
		if(!isalpha(line[i])) continue;
		for(int j = i+1;j<sz;j++){
			if(line[j] == line[i]){
				ans++;
				line[j] = ' ';
			}else{
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}