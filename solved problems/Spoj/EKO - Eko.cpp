#include <bits/stdc++.h>
using namespace std;

int binary(int a[],int siz,long long key){
    int l = 0,r = a[siz -1];
    int mid;
    while(r - l>1){
    	mid = (l+r)/2;
    	long long sum = 0;
    	for(int count1 = 0;count1<siz;count1++){
        	if(a[count1] > mid)
            sum += (a[count1]-mid);
        }
        if(sum == key) break;
        else if(sum > key){
            l = mid;
        }else{
            r = mid;
        }
     }
     return (l+r)/2;
 }
 
int main() {
	int N;
    long long M;
    scanf("%d %llu", &N, &M);
    int arr[N];
    for(int count1 = 0;count1<N;count1++){
        scanf("%d", &arr[count1]);
    }
    sort(arr,arr+N);
    int rs = binary(arr,N,M);
    cout<<rs<<endl;
    return 0;
}
