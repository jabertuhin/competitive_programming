#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	cin>>line;
	if(line[0]<92){
		cout<<line<<endl;
	}else{
		line[0] = toupper(line[0]);
		cout<<line<<endl;
	}
	return 0;
}