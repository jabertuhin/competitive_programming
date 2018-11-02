#include <bits/stdc++.h>
using namespace std;

#define Max 10000000

bool prime[Max];

void primeGen(){
    memset(prime,true,sizeof(prime));
    int n = sqrt(Max);
    for(int i = 3;i<=n;i++){
		if(prime[i]){
	    	for(int j = i*i;j<Max;j += 2*i){
    			prime[j] = false;
			}
		}
    }
}

vector<int> primeNum;

void pusher(){
	primeNum.push_back(2);
	for(int i = 3;i<Max;i += 2){
		if(prime[i]) primeNum.push_back(i);
	}
}

int main(){
    primeGen(),pusher();

    int n;
    scanf("%d",&n);

    long long int ans = n;

    int sz = primeNum.size();

    int num = n;

    for(int i =0;i<sz && num != 1 && primeNum[i]*primeNum[i]<= num;i++){
        int x = primeNum[i];
        if(num%x == 0){
            while(num%x == 0){
                num /= x;
                ans += num;
            }
        }
    }

    if(num>1){
        ans++;
    }

    cout<<ans<<"\n";

    return 0;
}
