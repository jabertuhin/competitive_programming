#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	cin>>line;
	int sz = line.size();
	int cnt = 0;
	for(int i =0;i<sz;i++){
		if(line[i]<92) cnt++;
	}
	if((cnt == sz)){
		for(int i  = 0;i<sz;i++) line[i] = tolower(line[i]);
	}else if(((cnt == sz-1) && line[0]>92)){
		line[0] = toupper(line[0]);
		for(int i  = 1;i<sz;i++) line[i] = tolower(line[i]);
	}
	cout<<line<<endl;
	return 0;
}