#include <bits/stdc++.h>
using namespace std;

int zeroCount(long long int val){
    int ans = 0,five = 5;
    while(val/five){
        ans += val/five;
        five *= 5;
    }
    return ans;
}


int bSearch(int z){
    long long int l = 0,r = 1000000000,mid = 0;
    while(l<=r){
        mid = (l+r)/2;
        int zr = zeroCount(mid);
        if(zr == z){
            return mid - (mid%5);
        }else if(zr>z){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int q;
        scanf("%d",&q);
        int ans = bSearch(q);
        (ans == -1)? printf("Case %d: impossible\n",i):printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
