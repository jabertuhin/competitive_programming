#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int n;
        scanf("%d",&n);
        if(n>10) printf("%d %d\n",(n-10),10);
        else printf("%d %d\n",0,n);
    }
    return 0;
}