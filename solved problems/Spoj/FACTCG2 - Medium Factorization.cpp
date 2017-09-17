#include <bits/stdc++.h>
using namespace std;
 
#define mx 10000010
 
bool primeNum[mx];
 
void prime(){
    memset(primeNum,true,sizeof(primeNum));
    int n = sqrt(mx);
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
    for(int i = 3;i<=mx;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}
 
int main() {
	prime(),pusher();
	int n,sz = pNum.size();
	while(scanf("%d",&n)==1){
		printf("1");
		int num = n;
		for(int i = 0;i<sz && num!=1 && pNum[i]*pNum[i]<=num;i++){
            int x = pNum[i];
            if(num%x == 0){
                while(num%x == 0){
                	printf(" x %d",x);
                    num/= x;
                }            
            }
        }
        if(num>1) printf(" x %d",num);
        printf("\n");
	}
	return 0;
} 