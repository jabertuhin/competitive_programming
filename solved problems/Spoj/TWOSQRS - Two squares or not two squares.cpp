#include <bits/stdc++.h>
 
using namespace std;
 
#define lim 1000000
vector<long long int> sqNum;
 
void generate(){
	for(long long int i = 0;i<lim;i++){
		long long int a = i*i; 
		sqNum.push_back(a);
	}
}
bool search(long long int n){
	int l = 0,mid,r = sqNum.size() -1;
	while(l<=r){
		mid = (l+r)/2;
		if(sqNum[mid]==n) return true;
		else if(sqNum[mid]>n) r = mid -1;
		else l = mid + 1;
	}
	return false;
}
 
int main()
{
    generate();
    int test;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++ ){
        long long int num;
        scanf("%lld",&num);
        int rtNum = sqrt(num);
        bool ans = false;
        for(int i = 0;i<=rtNum;i++){
        	if(search(num-sqNum[i])){
        		ans = true;
        		break;
        	}
        }
        (ans)? printf("Yes\n"):printf("No\n");
    }
    return 0;
}
 