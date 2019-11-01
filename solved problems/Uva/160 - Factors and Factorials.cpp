#include <bits/stdc++.h>

using namespace std;
#define Max 10000010
bool primeNum[Max+1];

long long int mx(long long int a,long long int b){
	if(a>b) return a;
	return b;
}


void gen(){
    memset(primeNum,true,sizeof(primeNum));
     int n = sqrt(Max);
     for(int i = 3;i<=n;i+=2){
        if(primeNum[i]){
           for(int j = i*i;j<n*n;j += 2*i){
            primeNum[j]= false;
           }
        }
     }
}
vector<long long int> pNum;
void pusher(){
    pNum.push_back(2);
    for(int i = 3;i<=Max;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}

int main()
{
    gen();
    pusher();
    int sz = pNum.size();
    int num;
    while(scanf("%lld",&num) && num){
    	int arr[Max],mxFact = 0;
    	memset(arr,0,sizeof(arr));
        long long int numt = 1;
        for(int j = 2;j<=num;j++){
        	numt = j*numt;
        	for(int i = 0;i<sz && pNum[i]*pNum[i]<=numt;i++){
                int x = pNum[i];
                if(numt%x == 0){
                    while(numt%x == 0){
                	    arr[x]++;
                        numt /= x;
                    }
                    mxFact = mx(mxFact,x);
                }
            }
            /*if(numt>1){
            	arr[numt]++;
            	mxFact = max(mxFact,numt);
            }*/
        }
        if(numt>1){
            arr[numt]++;
            mxFact = mx(mxFact,numt);
        }
        int lim = lower_bound(pNum.begin(),pNum.end(),mxFact) - pNum.begin();
        if(num<10) printf("  %d! =",num);
        else if(num<99) printf(" %d! =",num);
        else printf("%d! =",num);
        for(int i = 0;i<=lim;i++){
        	if((i+1)%16 == 0) printf("\n      ");
        	if(arr[pNum[i]]<10) printf("  %d",arr[pNum[i]]);
        	else if(arr[pNum[i]]<99) printf(" %d",arr[pNum[i]]);
        	else printf("%d",arr[pNum[i]]);
        	//if((i+1)%15 == 0) printf("\n      ");
        }
        printf("\n");
    }
    return 0;
}
