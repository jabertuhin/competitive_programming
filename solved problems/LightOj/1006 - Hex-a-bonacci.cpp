#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int a, b, c, d, e, f,n;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        int ans[n+1];
        ans[0] = a;
        ans[1] = b;
        ans[2] = c;
        ans[3] = d;
        ans[4] = e;
        ans[5] = f;
        for(int i = 6;i<=n;i++){
            ans[i] = ans[i-6]% 10000007+ans[i-5]% 10000007+ans[i-4]% 10000007+ans[i-3]% 10000007+ans[i-2]% 10000007+ans[i-1]% 10000007;
        }
        printf("Case %d: %d\n",i,ans[n]%10000007);
    }
    return 0;
}