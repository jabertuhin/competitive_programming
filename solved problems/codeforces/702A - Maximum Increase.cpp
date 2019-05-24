#include <iostream>
using namespace std;

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int mx = 1, len = 1;

    for(int j = 1;j<n;j++){
        if (arr[j] > arr[j-1]){
            len++;            
        }else{
            mx = max(mx, len);
            len = 1;            
        }
    }
    mx = max(mx, len);
    

    printf("%d\n", mx);

    return 0;
}