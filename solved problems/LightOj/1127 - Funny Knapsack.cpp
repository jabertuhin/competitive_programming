#include <bits/stdc++.h>
using namespace std;
 
int arr1[30],arr2[30];
 
int main() {
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int n;
        long long int w;
        scanf("%d%lld",&n,&w);
        int half1 = n/2,half2 = n - n/2;
        for(int j = 0;j<half1;j++) scanf("%d",&arr1[j]);
        for(int j = 0;j<half2;j++) scanf("%d",&arr2[j]);
       
        vector<long long int> fSet,sSet;
        for(int j = 0;j<(1<<half1);j++){
            long long int sum = 0;
            for(int pos = 0;pos<half1;pos++){
                if(j & (1<<pos)) sum += arr1[pos];
            }
            fSet.push_back(sum);
        }
       
        for(int j = 0;j<(1<<half2);j++){
            long long int sum = 0;
            for(int pos = 0;pos<half2;pos++){
 
                if(j & (1<<pos)) sum += arr2[pos];
            }
            sSet.push_back(sum);
        }
        sort(fSet.begin(),fSet.end());
        int sz = sSet.size();
        long long int ANS = 0;
        for(int j = 0;j<sz;j++){
            long long int diff = w - sSet[j];
            int pos = upper_bound(fSet.begin(),fSet.end(),diff)-fSet.begin();
            ANS += pos;
        }
        //if(w == 0) ANS = 0;
        printf("Case %d: %lld\n",i,ANS);
    }
    return 0;
}