#include <bits/stdc++.h>
using namespace std;

#define mx 1000009

bool primeNum[mx];

void prime(){
     memset(primeNum,true,sizeof(primeNum));
     for(int i = 3;i*i<mx;i+=2){
        if(primeNum[i]){
            for(int j = i*i;j<mx;j += 2*i){
                primeNum[j]= false;
            }
        }
     }
}

vector<long long int> pNum;

void pusher(){
    pNum.push_back(2);
    for(int i = 3;i<mx;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}

vector<long long int> tPrime;

void t_prime(){

    int sz = pNum.size();

    for(int i = 0;i<sz;i++){
        tPrime.push_back(pNum[i]*pNum[i]);
    }
}

int main(){
    prime(),pusher(),t_prime();
    int n;
    scanf("%d",&n);

    long long int num;
    for(int i = 1;i<=n;i++){
        cin>>num;
        (binary_search(tPrime.begin(),tPrime.end(),num))? printf("YES\n"):printf("NO\n");
    }

}
