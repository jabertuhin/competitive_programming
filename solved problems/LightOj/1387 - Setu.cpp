#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int cmd,ans  = 0;
        scanf("%d",&cmd);
        printf("Case %d:\n",i);
        for(int j = 1;j<=cmd;j++){
            string a;
            cin>>a;
            if(a == "report") printf("%d\n",ans);
            else{
                int val;
                scanf("%d",&val);
                ans += val;
            }
        }
    }
    return 0;
}