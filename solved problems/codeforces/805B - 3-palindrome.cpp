#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int lp = ceil(n/2.0);
	string ans;
	for(int i = 1;i<=lp;i++){
		if(i%2 == 1){
			ans += "aa";
		}else{
			ans += "bb";
		}
	}
	if(n%2==1) ans.pop_back();
	cout<<ans<<endl;
	return 0;
}