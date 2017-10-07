#include <bits/stdc++.h>
 
using namespace std;
 
const int MX = 3000;
int ab[MX*MX];
int a[MX],b[MX],c[MX],d[MX];
 
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
 
    for(int i =0,idx = 0;i<n;i++){
    	for(int j = 0;j<n;j++){
    	    ab[idx] = a[i]+b[j];
    	    idx++;
    	}
    }
 
    sort(ab,ab+(n*n));
    int cnt = 0;
    
    
    for(int i =0;i<n;i++){
    	for(int j = 0;j<n;j++){
    	    int val = c[i] + d[j];
    	    pair<int*, int*> range = equal_range(ab, ab+(n*n),-val);
    	    cnt += (range.second - range.first);
    	}
    }
 
    printf("%d\n",cnt);
    return 0;
} 