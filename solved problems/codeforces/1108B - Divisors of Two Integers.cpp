#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  scanf("%d",&n);

  multiset<int> mSet;

  for(int i = 1;i<=n;i++){
    int div;
    scanf("%d",&div);
    mSet.insert(div);
  }

  int x = *prev(mSet.end()), y = 0;

  for(int i = 1;i<=x;i++){
    if(x%i == 0){
      mSet.erase(mSet.find(i));
    }
  }

  y = *prev(mSet.end());

  printf("%d %d\n",x,y);

  return 0;
}
