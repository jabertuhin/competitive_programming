#include <bits/stdc++.h>

using namespace std;

int res(long long int n){
    int cyr = 1;
    if(n & 1) n = 3*n+1;
    else n = n/2;
    while(n != 1){
        if(n & 1) n = 3*n+1;
        else n = n/2;
        cyr++;
    }
    return cyr;
}

int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)== 2 && (a+b)){
        int ans = 0;
        long long int mx = 0;
        long long int st,ed;
        st = min(a,b),ed = max(a,b);
        for(long long int i = st;i<=ed;i++){
            int temp = res(i);
            if(temp>ans){
                ans = temp;
                mx = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %d values.\n",min(a,b),max(a,b),mx,ans);
    }
    return 0;
}
