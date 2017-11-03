#include <bits/stdc++.h>
using namespace std;

char code(char c){
	char ret;
	int asc = c - '0';
	if(c == 'A'||c == 'B'||c == 'C'){
		ret = '2';
	}else if(c == 'D'||c == 'E'||c == 'F'){
		ret ='3';
	}else if(c == 'G'||c == 'H'||c == 'I'){
		ret ='4';
	}else if(c == 'J'||c == 'K'||c == 'L'){
		ret ='5';
	}else if(c == 'M'||c == 'N'||c == 'O'){
		ret ='6';
	}else if(c == 'P'||c == 'S'||c == 'R'){
		ret ='7';
	}else if(c == 'T'||c == 'U'||c == 'V'){
		ret ='8';
	}else if(c == 'W'||c == 'X'||c == 'Y'){
		ret ='9';
	}else if(asc>=0 && asc<=9){
		ret = c;
	}
	return ret;
}

int main() {
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int n;
		scanf("%d",&n);
		map<string,int> mp;		
		for(int j =1;j<=n;j++){
			string line,temp;
			cin>>line;
			int sz = line.size();
            for(int k = 0;k<sz;k++){
				if(line[k] != '-') temp.push_back(code(line[k]));
			}
			if(!mp.count(temp)){
				mp[temp] = 1;
			}else mp[temp]++;
		}
		map<string,int>::iterator it;
		int cnt = 0;
		for(it = mp.begin();it != mp.end();it++){
			string s = it->first;
			int freq = it->second;
			if(freq>1){
				cout<<s[0]<<s[1]<<s[2]<<"-"<<s[3]<<s[4]<<s[5]<<s[6]<<" "<<freq<<endl;
				cnt++;
			}
		}
		if(cnt == 0) printf("No duplicates.\n");
		if(i != test) printf("\n");
	}
	return 0;
}