
 #include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	string line;
	cin>>line;
	int sz = line.size();
	int se = 0,frn = 0;
	for(int i = 0;i<sz;i++){
		if(i+1<sz && line[i]=='S' && line[i+1]=='F'){
			se++;
		}else if(i+1<sz && line[i]=='F' && line[i+1]=='S'){
			frn++;
		}
	}
	if(se>frn) printf("YES\n");
	else printf("NO\n");
	return 0;
}