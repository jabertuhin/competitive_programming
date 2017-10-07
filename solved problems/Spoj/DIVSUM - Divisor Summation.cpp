#include <bits/stdc++.h>
using namespace std;
 
int sum[500010];
 
void gen(){
	sum[0] = 0,sum[1] = 0;
	for(int i = 2;i<500010;i++){
		int n = sqrt(i), ans = 1;
		for(int j = 2;j<=n;j++){
			if(i%j == 0){
				if(i/j == j) ans += j;
				else{
					ans += j + i/j;
				}
			}
		}
		sum[i] = ans;
	}
}
 
int main() {
	gen();
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int a;
		scanf("%d",&a);
		printf("%d\n",sum[a]);
	}
	return 0;
} 