#include <bits/stdc++.h>
using namespace std;
 
#define Mx 1000000
 
int phi[Mx+6],mark[Mx+6];
 
void sievephi(){
	memset(mark,0,sizeof(mark));
	for(int i=1;i<Mx+6;i++){
		phi[i] = i;
	}
	phi[1]=mark[1]=1;
	for(int i =2;i<Mx+6;i++){
		if(!mark[i]){
			for(int j = i;j<Mx+6;j+=i){
				mark[j] = 1;
				phi[j] = phi[j]/i*(i-1);
			}
		}
	}
}
 
int main() {
	sievephi();
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int a;
		scanf("%d",&a);
		printf("%d\n",phi[a]);
	}
	return 0;
} 