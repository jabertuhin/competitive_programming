#include <bits/stdc++.h>
using namespace std;
 
#define Max 10000000
 
bool primeNum[Max];
void prime(){
    memset(primeNum,true,sizeof(primeNum));
     int n = sqrt(Max);
     for(int i = 3;i<=n;i+=2){
        if(primeNum[i]){
            for(int j = i*i;j<n*n;j += 2*i){
                primeNum[j]= false;
            }
        }
     }
}
vector<int> pNum;
void pusher(){
pNum.push_back(2);
    for(int i = 3;i<=Max;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}
vector<int> lucky;
 
void lckGen(){
	int sz = pNum.size();
	for(int j = 30;j<=3000;j++){
		int num = j,cnt = 0;
		if(primeNum[num] && num%2 != 0) continue;
		for(int i = 0;i<sz && num!=1 && pNum[i]*pNum[i]<=num;i++){
            int x = pNum[i];
            if(num%x == 0){
                while(num%x == 0){
                    num/= x;
                }
                cnt++;
            }
        }
        if(num>1) cnt++;
        if(cnt >= 3) {
            lucky.push_back(j);
        }
	}
}
 
 
int main() {
	prime();
	pusher();
	lckGen();
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int n;
		scanf("%d",&n);
		printf("%d\n",lucky[n-1]);
	}
	return 0;
} 