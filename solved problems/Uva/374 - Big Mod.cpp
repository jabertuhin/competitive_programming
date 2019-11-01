#include <bits/stdc++.h>

using namespace std;

long long int bigMod(long long int b,long long int p,long long int m){
    if(p == 0) return 1;
    if(p%2) return ((b%m)*(bigMod(b,p-1,m)))%m;
    else{
        long long int c = bigMod(b,p/2,m);
        return ((c%m)*(c%m))%m;
    }
}

int main()
{
    long long int b,p,m;
    while(scanf("%lld%lld%lld",&b,&p,&m) == 3){
        printf("%lld\n",bigMod(b,p,m));
    }
    return 0;
}
