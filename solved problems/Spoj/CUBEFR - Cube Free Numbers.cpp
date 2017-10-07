    #include <bits/stdc++.h>
    using namespace std;
     
    bool chk[1000100];
    vector<int> Qfree;
    void gen(){
    	memset(chk,true,sizeof(chk));
    	for(int i = 2;i<=105;i++){
    		if(chk[i]){
    			for(int j = i*i*i;j<1000100;j+=i*i*i){
    			     chk[j] = false;
    		    }
    		}
    	}
        for(int i = 1;i<1000100;i++){
        	if(chk[i]){
        		Qfree.push_back(i);
        	}
        }
    }
     
    int main() {
    	gen();
    	int test;
    	scanf("%d",&test);
    	for(int i = 1;i<=test;i++){
    		int num;
    		scanf("%d",&num);
    		if(chk[num]){
    			int ans = 1 + lower_bound(Qfree.begin(),Qfree.end(),num) - Qfree.begin();
    			printf("Case %d: %d\n",i,ans);
    		}
    		else{
    			printf("Case %d: Not Cube Free\n",i);
    		}
    	}
    	return 0;
    }  