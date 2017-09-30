#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		string line;
		cin>>line;
		int sz = line.size();
		if(sz<=10){
			cout<<line<<endl;
		}else{
			cout<<line[0]<<(sz-2)<<line[sz-1]<<endl;
		}
	}
	return 0;
}