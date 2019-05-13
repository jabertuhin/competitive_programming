//Problem link - http://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    scanf("%d%d",&a,&b);    
    /*    
    * minimum nuber of the sock will make the pair. 
    */
    printf("%d %d\n", min(a, b), (max(a, b) - min(a, b))/2);
    return 0;
}