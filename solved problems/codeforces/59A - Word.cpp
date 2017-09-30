#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	cin>>line;
	int sz = line.size();
	int up = 0,low = 0;
	for(int i = 0;i<sz;i++){
		if(line[i]<92) up++;
		else low++;
	}
	if(up>low) transform(line.begin(),line.end(),line.begin(),::toupper);
	else transform(line.begin(),line.end(),line.begin(),::tolower);
	cout<<line<<endl;
	return 0;
}