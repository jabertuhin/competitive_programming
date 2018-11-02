#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i = 1;i<=n;i++) scanf("%d",&arr[i]);

    vector<int> prnt;

    for(int i = 1;i<=n;i++){
        int vis[n+1] = {0};

        int nxt = arr[i];
        vis[i] = 1;

		//cout<<"start : "<<i<<"\n";

        while(true){
        	//cout<<"Next : "<<nxt<<"\n";
            if(vis[nxt]){
                prnt.push_back(nxt);
                break;
            }else{
                vis[nxt] = 1;
                nxt = arr[nxt];
            }
        }
    }

    printf("%d",prnt[0]);
    for(int i = 1;i<prnt.size();i++) printf(" %d",prnt[i]);
    printf("\n");

}
