#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	scanf("%d",&n);
	int friendList[100000];
	vector<int> checkList;
	memset(friendList,0,sizeof(friendList));
	for(int i = 1;i<=n;i++){
		int frnd;
		scanf("%d",&frnd);
		checkList.push_back(frnd);
		friendList[frnd] = 1;
		int m;
		scanf("%d",&m);
		for(int j = 1;j<=m;j++){
			int fOf;
			scanf("%d",&fOf);
			checkList.push_back(fOf);
			if(friendList[fOf] == 0) friendList[fOf] = 2;
		}
	}
	int sz = checkList.size(),ans = 0;
	for(int j = 0;j<sz;j++){
		if(friendList[checkList[j]] == 2){
		   ans++;	
		   friendList[checkList[j]] = 0;
		}
	}
	printf("%d\n",ans);
	return 0;
} 