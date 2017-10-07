#include <bits/stdc++.h>
using namespace std;
 
#define Mx 10000010
 
bool primeNum[Mx];
void prime(){
    memset(primeNum,true,sizeof(primeNum));
     int n = sqrt(Mx);
     for(int i = 3;i<=n;i+=2){
        if(primeNum[i]){
            for(int j = i*i;j<Mx;j += 2*i){
                primeNum[j]= false;
            }
        }
     }
}
vector<int> pNum;
 
void pusher(){
    pNum.push_back(2);
    for(int i = 3;i<Mx;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}
 
int main() {
	prime(),pusher();
	int test;
	scanf("%d",&test);
	int sz = pNum.size();
	for(int j = 1;j<=test;j++){
		int n;
		scanf("%d",&n);
		int num = n,odd = 0,even = 0;
		for(int i = 0;i<sz && num!=1 && pNum[i]*pNum[i]<=num;i++){
            int x = pNum[i],cnt = 0;
            if(num%x == 0){
                while(num%x == 0){
                    num/= x;
                    cnt++;
                }
                if(cnt%2 == 0) even++;
                else odd++;
            }
        } 
        if(num>1) odd++;
		//cout<<"N : "<<n<<" "<<even<<"  "<<odd<<endl;
        (even>odd)? printf("Psycho Number\n"):printf("Ordinary Number\n");
		//(phs[n])? printf("Psycho Number\n"):printf("Ordinary Number\n");
	}
	return 0;
} 