#include <bits/stdc++.h>
using namespace std;
 
#define exp 1e-9
 
int main() {
    int test;
    scanf("%d",&test);
    double p = 2*acos(0);
    for(int i = 1;i<=test;i++){
        double rad;
        scanf("%lf",&rad);
        double cir = p*rad*rad;
        double sq = (2*rad)*(2*rad);
        printf("Case %d: %.2lf\n",i,((sq-cir)+exp));
    }
    return 0;
}