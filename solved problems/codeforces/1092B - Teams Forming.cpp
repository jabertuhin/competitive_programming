#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr, arr+n);
    int ans = 0;
    for(int i = 0; i<n; i+=2){
        ans += abs(arr[i] - arr[i+1]);
    }
    printf("%d\n",ans);
    return 0;
}