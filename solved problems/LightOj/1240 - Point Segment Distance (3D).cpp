#include <bits/stdc++.h>
using namespace std;
 
#define eps 1e-9
double px,py,pz;
 
double f(double ax,double ay,double az,double bx,double by,double bz,double k){
    double ex = ax + k*(bx - ax);
    double ey = ay + k*(by - ay);
    double ez = az + k*(bz - az);
    return sqrt((px-ex)*(px-ex)+(py-ey)*(py-ey)+(pz-ez)*(pz-ez));
}
 
 
 
int main() {
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        double x1,y1,z1,x2,y2,z2;
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&z1,&x2,&y2,&z2,&px,&py,&pz);
        double hi= 1,lo = 0;
        while(hi-lo>=eps){
            double lt = lo + (hi-lo)/3.0;
            double rt = hi - (hi-lo)/3.0;
            if(f(x1,y1,z1,x2,y2,z2,lt) < f(x1,y1,z1,x2,y2,z2,rt)) hi = rt;
            else lo = lt;
        }
        printf("Case %d: %.10lf\n",i,f(x1,y1,z1,x2,y2,z2,(hi+lo)/2));
    }
   
    return 0;
}