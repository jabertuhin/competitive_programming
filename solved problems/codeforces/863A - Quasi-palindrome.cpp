#include <bits/stdc++.h>
using namespace std;

int main() {
	string line,temp;
	cin>>line;
	temp = line;
	reverse(temp.begin(),temp.end());
	if(line == temp){
		printf("YES\n");
	}else{
		int sz = line.size()-1;
		while(line[sz] == '0'){
			line.pop_back();
			sz = line.size() - 1;
		}
		temp = line;
	    reverse(temp.begin(),temp.end());
	    if(line == temp){
		    printf("YES\n");
	    }else{
	    	printf("NO\n");
	    }
	}
	return 0;
}