#include <bits/stdc++.h>
using namespace std;

const double PI = 2*acos(0.0);
const double eps = 1e-7;

double search(double a[],int frnd,int len){
	double l =0,r = a[len-1];
	double mid;
	while(r-l>eps){
		mid = (l+r)/2;
		int f = 0;
		for(int i = 0;i<len;i++){
			f += (a[i]/mid);
		}
		if(f > frnd){
			l = mid;
		}
		else{
			r = mid;
		}
	}
	return (l+r)/2;
}

int main() {
	int test;
	scanf("%d",&test);
	for(int i = 1;i<=test;i++){
		int N,F;
		scanf("%d%d",&N,&F);
		int arr[N];
		double area[N];
		for(int j = 0;j<N;j++){
			scanf("%d",&arr[j]);
			area[j]= PI*arr[j]*arr[j];
			
		}
		sort(area,area+N);
		double res = search(area,F,N);
		printf("%.4lf\n",res);
	}
	return 0;
}