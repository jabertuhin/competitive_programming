/*
Light Oj - 1088 - Points in Segments
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++){
        int n,q;
        scanf("%d%d",&n,&q);
        int arr[n];
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+n);
        printf("Case %d:\n",i);
        for(int j = 1;j<=q;j++){
            int l,r;
            scanf("%d%d",&l,&r);
            int u = lower_bound(arr,arr+n,l)-arr;
            int v = upper_bound(arr,arr+n,r)-arr;
            //cout<<u<<"  "<<v<<endl;
            printf("%d\n",(v-u));
        }
    }
    return 0;
}
