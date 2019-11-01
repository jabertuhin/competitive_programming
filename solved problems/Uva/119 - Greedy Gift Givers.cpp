#include <bits/stdc++.h>
using namespace std;

int main() {
	int memb;
	bool chk = false;
	while(scanf("%d",&memb)==1){
		if(chk){
			printf("\n");
		}
		chk =true;
		getchar();
		map<string,int> mp;
		string nams[memb];
		for(int i = 0;i<memb;i++){
			cin>>nams[i];
			mp[nams[i]] = 0;
		}
		for(int i = 1;i<=memb;i++){
			string name;
			cin>>name;
			int amount;scanf("%d",&amount);
			int frnd;scanf("%d",&frnd);
			getchar();
			int per = 0;
			if(frnd != 0) per = (amount/frnd);
			for(int j = 1;j<=frnd;j++){
				string frndName;cin>>frndName;
				mp[frndName] += per;
				mp[name] -= per;
			}
		}
		for(int i = 0;i<memb;i++){
			cout<<nams[i]<<" "<<mp[nams[i]]<<endl;
		}
	}
	return 0;
}
