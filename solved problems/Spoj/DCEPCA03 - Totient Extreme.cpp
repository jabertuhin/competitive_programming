#include <bits/stdc++.h>
using namespace std;
#define mx 10008
 
int phi[mx],mark[mx];
long long int sum[mx];
 
void sivephi(){
	memset(mark,0,sizeof(mark));
	for(int i = 1;i<mx;i++) phi[i] = i;
	
	phi[1] = mark[1] = sum[1] = 1;
	for(int i = 2;i<mx;i++){
		if(!mark[i]){
			for(int j = i;j<mx;j+=i){
				mark[j] = 1;
				phi[j] = (phi[j]/i)*(i-1);
			}
		}
		sum[i] = sum[i-1] + phi[i];
	}
}
 
int main() {
	sivephi();
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int n;
		scanf("%d",&n);
		//long long int ans = sum[n]*sum[n];
		//printf("%lld\n",ans);
		cout<<(sum[n]*sum[n])<<endl;
	}
	return 0;
} 