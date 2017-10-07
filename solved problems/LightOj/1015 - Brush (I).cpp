#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int n;
        scanf("%d",&n);
        int ans = 0;
        int a;
        for(int j = 1;j<=n;j++){
            scanf("%d",&a);
            if(a>0) ans += a;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}