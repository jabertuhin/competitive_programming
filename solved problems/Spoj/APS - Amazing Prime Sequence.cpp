#include <bits/stdc++.h>
 
using namespace std;
 
#define Max 10000000
bool primeNum[Max];
void prime(){
    memset(primeNum,true,sizeof(primeNum));
     int n = sqrt(Max);
     for(int i = 3;i<=n;i+=2){
        if(primeNum[i]){
            for(int j = i*i;j<Max;j += 2*i){
                primeNum[j]= false;
            }
        }
     }
}
vector<int> pNum;
void pusher(){
    pNum.push_back(2);
    for(int i = 3;i<Max;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}
 
long long int a[Max];
 
void ans(){
    memset(a,0,sizeof(a));
    a[0] = a[1] = 0;
    a[2] = 2;
    int sz = pNum.size();
    for(int j = 3;j<Max;j++){
        if(primeNum[j] && j%2 != 0) a[j] = a[j-1]+j;
        else{
            int num = j;
            for(int i = 0;i<sz && num!=1 && pNum[i]*pNum[i]<=num;i++){
                int x = pNum[i];
                if(num%x == 0){
                    while(num%x == 0){
                        num/= x;
                    }
                    a[j] = a[j-1]+x;
                    break;
                }
            }
        }
    }
}
 
int main()
{
    prime();
    pusher();
    ans();
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int n;
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}