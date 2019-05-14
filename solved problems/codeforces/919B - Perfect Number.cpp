#include <bits/stdc++.h>
using namespace std;

int digitSum(int num){
    int sum = 0;
    while(num>0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main(){
    int kTh;
    scanf("%d",&kTh);
    int pos = 0;
    for(int i = 19;;i++){
        if(digitSum(i) == 10) pos++;
        if(pos == kTh){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}