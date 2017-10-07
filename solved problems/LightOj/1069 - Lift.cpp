#include <bits/stdc++.h>
using namespace std;
 
#define Mx 100010
int arr[Mx],segTree[4*Mx];
void build(int node,int str,int ed){
    if(str == ed){
        segTree[node] = arr[str];
        return;
    }
    int left = node<<1,right = left +1,mid = (str+ed)/2;
    build(left,str,mid),build(right,mid+1,ed);
    segTree[node] = min(segTree[left],segTree[right]);
}
 
int query(int node,int str,int ed,int i,int j){
    if(ed<i || str>j) return INT_MAX;
    if(str>=i && ed<=j) return segTree[node];
    int left = node<<1,right = left +1,mid = (str+ed)/2;
    int p1 = query(left,str,mid,i,j);
    int p2 = query(right,mid+1,ed,i,j);
    return min(p1,p2);
}
 
int main() {
    int test;
    scanf("%d",&test);
    for(int j = 1;j<=test;j++){
        int n,qNum;
        scanf("%d%d",&n,&qNum);
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        build(1,0,n-1);
        printf("Case %d:\n",j);
        for(int i = 1;i<=qNum;i++){
           int l,r;
           scanf("%d%d",&l,&r);
           printf("%d\n",query(1,0,n-1,l-1,r-1));
       }
    }
    return 0;
}