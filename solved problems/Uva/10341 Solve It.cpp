#include <bits/stdc++.h>

using namespace std;
#define V 0.0000001
int p,q,r,s,t,u;
double f(double x){
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
int main()
{
    while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)==6){
        double l = 0,h = 1;
        double x;
        double res;
        while(h -l >= V){
            x = (l+h)/2;
            res = f(x);
            if(res == 0){
                break;
            }
            else if(res < 0){
                h = x;
            }
            else if(res > 0){
                l = x;
            }
        }
        if(f(0)*f(1)>0){
            printf("No solution\n");
        }
        else{
            printf("%.4f\n",x);
        }
    }
    return 0;
}
