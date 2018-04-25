#include <bits/stdc++.h>
using namespace std;

#define eps 1e-6
double x,y,c;

double f(double w){
    double  p = sqrt(x*x-w*w);
    double  q = sqrt(y*y-w*w);
    return (p*q)/(p+q);
}

int main(){
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        scanf("%lf%lf%lf",&x,&y,&c);
        double l = 0,r = max(x,y),mid,ans;
        while(1){
            mid = (l+r)/2.0;
            double c1 = f(mid);
            if(fabs(c1-c)<eps){
                ans = mid;
                break;
            }else if(c1>c){
                l = mid;
            }else{
                r = mid;
            }
        }
        printf("Case %d: %lf\n",i,ans);
    }
}
