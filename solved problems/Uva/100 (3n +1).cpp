#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1,num2;
    while(scanf("%d%d",&num1,&num2)==2){
        int n1 = min(num1,num2);
        int n2 = max(num1,num2);
        int Max = 0;
        for(int i = n1;i<=n2;i++){
            int cycLen = 1;
            int num = i;
            while(num!=1){
                if(num%2 == 0){
                    num = num/2;
                }
                else{
                    num = 3*num +1;
                }
                cycLen++;
            }
            if(cycLen>Max){
                Max = cycLen;
            }
        }
        printf("%d %d %d\n",num1,num2,Max);
    }
    return 0;
}
