#include <bits/stdc++.h>
using namespace std;
 
long long int p(int a,int b){
    long long int rt = 1;
    for(int i = 1;i<=b;i++){
        rt *= a;
    }
    return rt;
}
 
int main() {
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int n;
        scanf("%d",&n);
        vector<int> v;
        while(n>0){
            v.push_back((n%2));
            n/=2;
        }
        v.push_back(0);
        reverse(v.begin(),v.end());
        next_permutation(v.begin(),v.end());
        long long int ans = 0;
        int sz = v.size();
        for(int j = 0,k = sz-1;j<sz;j++,k--){
            if(v[j] == 1){
                ans += p(2,k);
            }
        }
        printf("Case %d: %lld\n",i,ans);
    }
    return 0;
}