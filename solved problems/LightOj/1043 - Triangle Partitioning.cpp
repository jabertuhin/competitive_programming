#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int test;
    scanf("%d",&test);
    double ab,bc,ca,rat;
    for(int i = 1;i<=test;i++){
        scanf("%lf%lf%lf%lf",&ab,&bc,&ca,&rat);
        rat = sqrt(rat/(rat+1));
        printf("Case %d: %.6lf\n",i,ab*rat);
    }
    return 0;
}