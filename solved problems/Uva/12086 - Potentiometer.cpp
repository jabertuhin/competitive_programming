#include <bits/stdc++.h>

using namespace std;
#define mx 200010
int arr[mx];
int tree[mx];
int n;
void update(int x,int val){
    for(;x<=n;x+=(x & -x)){
        tree[x] += val;
    }
}

int query(int x){
    int sum = 0;
    for(;x>0;x-=(x& -x)){
        sum += tree[x];
    }
    return sum;
}

/*string a[3];
void separate(string s)
{
    stringstream sst;
    string test;
    sst<<s;
    int i = 0;
    while(sst>>test){
        arr[i] = test;
        i++;
    }
}*/
int main(){
    //freopen("a.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    bool chk = false;
    int cs = 1;
    while(scanf("%d",&n)==1 && n){
        if(chk) printf("\n");
        memset(tree,0,sizeof(tree));
        for(int i = 1; i <=n; i++){
            scanf("%d",&arr[i]);
            update(i,arr[i]);
        }
        getchar();
        string s;
        //getline(cin,s);
        printf("Case %d:\n",cs);
        cs++;
        while(getline(cin,s) && s!= "END"){
                stringstream ss(s);
                string com;
                int a,b;
                ss>>com>>a>>b;
                if(com == "M"){
                        printf("%d\n",query(b)-query(a-1));
                }else{
                    update(a,b-arr[a]);
                    arr[a] = b;
                }
        }
        chk = true;
    }
    return 0;
}