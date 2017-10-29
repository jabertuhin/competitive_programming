#include <bits/stdc++.h>
using namespace std;

#define mx 10010
bool prime[mx];

void primeSieve(){
	memset(prime,true,sizeof(prime));
	int n = sqrt(mx);
	for(int i = 3;i<=n;i += 2){
		if(prime[i]){
			for(int j = i*i;j<mx;j += 2*i){
				prime[j] = false;
			}
		}
	}
	for(int i = 4;i<mx;i+= 2) prime[i] = false;
}

int main(){
	primeSieve();
	int num;
	scanf("%d",&num);
	for(int i = 1;i<=1000;i++){
		int temp = (num*i)+1;
		if(!prime[temp]){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}