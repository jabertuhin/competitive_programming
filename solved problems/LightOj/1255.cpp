#include <bits/stdc++.h>
using namespace std;

#define mx 1000010
string text,pattern;
int back_table[mx],n,m;

void kmpPreProcess(){
	int i = 0,j = -1;
	back_table[0] = -1;
	while(i<m){
		while(j>=0 && pattern[i]!=pattern[j]) j = back_table[j];
		i++,j++;
		back_table[i] = j;
	}
}

int kmpSearch(){
	kmpPreProcess();
	int i = 0,j = 0,ans = 0;
	while(i<n){
		while(j>=0 && text[i]!=pattern[j]) j = back_table[j];
		i++,j++;
		if(j == m){
			ans++;
			j = back_table[j];
		}
	}
	return ans;
}

int main() {
	int test;
	scanf("%d",&test);
	getchar();
	for(int i = 1;i<=test;i++){
		cin>>text>>pattern;
		n = text.size(),m = pattern.size();
		printf("Case %d: %d\n",i,kmpSearch());
	}
	return 0;
}