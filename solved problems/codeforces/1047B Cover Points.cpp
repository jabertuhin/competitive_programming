#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int mx = 0;
    for(int i = 1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);

        mx = max(mx,(a+b));
    }
    printf("%d\n",mx);
    return 0;
}
