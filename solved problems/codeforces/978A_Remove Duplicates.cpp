#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++) scanf("%d",&arr[i]);

	vector<int> v;

    for(int j = n-1;j>=0;j--){
    	if(arr[j] == -1) continue;
        for(int k = 0;k<j;k++){
            if(arr[j] == arr[k]){
                arr[k] = -1;
            }
        }
        v.push_back(arr[j]);
    }

    printf("%d\n",v.size());

    printf("%d",v[v.size()-1]);

    for(int i = v.size()-2;i>=0;i--){
        printf(" %d",v[i]);
    }
    printf("\n");

    return 0;
}
