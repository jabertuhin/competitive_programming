#include <bits/stdc++.h>

using namespace std;
bool primeNum[1000000];
void prime(){
    memset(primeNum,true,sizeof(primeNum));
     int n = sqrt(1000000);
     for(int i = 3;i<=n;i+=2){
        if(primeNum[i]){
            for(int j = i*i;j<n*n;j += 2*i){
            primeNum[j]= false;
            }
        }
     }
}
vector<int> pNum;
void pusher(){
pNum.push_back(2);
    for(int i = 3;i<=1000000;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}

int main()
{
    prime();
    pusher();
    int sz = pNum.size();
    int num;
    while(scanf("%d",&num)==1){
        if(num == 0)break;
        int temp = num;
        int sum = 1;
        for(int i = 0;i<sz && temp != 1 && pNum[i]*pNum[i];i++){

        }
    }
    return 0;
}
