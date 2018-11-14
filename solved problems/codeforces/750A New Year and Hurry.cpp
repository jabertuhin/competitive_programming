#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    scanf("%d%d",&n,&k);

    int ans = 0,tm = 0,time_to_solve = 240 - k;

    for(int i = 1;i<=n;i++){
        tm += i*5;
        if(tm <= time_to_solve){
            ans++;
        }else{
            break;
        }
    }

    printf("%d\n",ans);

}
