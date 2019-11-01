#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	bool flip = true;
	while(getline(cin,line)){
		//bool flip = true;
		int sz = line.size();
		for(int i = 0;i<sz;i++){
			if(line[i] == '\"' && flip){
				cout<<"``";
				flip = false;
			}
			else if(line[i] == '\"' && !flip){
				cout<<"\''";
				flip =  true;
			}
			else{
				cout<<line[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
