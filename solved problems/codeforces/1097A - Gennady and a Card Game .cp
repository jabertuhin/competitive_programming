#include <bits/stdc++.h>
using namespace std;

int main() {
	string tableCard;
	cin>>tableCard;
	
	bool chk = false;
	
	for(int i = 1;i<=5;i++){
		string handCard;
		cin>>handCard;
		if(handCard[0] == tableCard[0] || handCard[1] == tableCard[1]){
			chk = true;
		}
	}
	
	(chk)? printf("YES\n"):printf("NO\n");
	
	return 0;
}