#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    string line;
    cin>>line;

    int ans = 0;

    for(int i = 0;i<n;i++){
        if(line[i] == 'x'){
            int cnt = 0;
            while(i<n && line[i] == 'x'){
                cnt++;
                i++;
            }
            i--;
            if(cnt>2) ans += cnt - 2;
        }
    }

    printf("%d\n",ans);

    return 0;
}
