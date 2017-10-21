/*
Solved this problem using Fenwick Binary Indexed Tree.
Logic is quite simple. My "tree" array is saving the information about how many inversions are there in a certain range.
After each inversion operation I am updating my "tree" array. And for each query I am just checking the how many inversions
were there. If it's odd number then I have to print the opposite of the current index value(if 1 then 0 and vice versa).
When it is even number that means it has changed to it's initial value(1 or 0).
*/
#include <bits/stdc++.h>
using namespace std;

#define mx 100010
int tree[mx],n;

void update(int x, int val){
      for(; x <= n; x += x&-x) tree[x] += val;
}

void updateRange(int x,int y,int val){
	update(x,val);
	update(y+1,-val);
}

int query(int x){
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += tree[x];
     return sum;
}

void prnt(){
	for(int i =  1;i<=n;i++) cout<<"("<<i<<")"<<tree[i]<<" ";
	cout<<endl;
}

int main() {
	int test;
	scanf("%d",&test);
	getchar();
	for(int i = 1;i<=test;i++){
		printf("Case %d:\n",i);
		memset(tree,0,sizeof(tree));
		string line;
		getline(cin,line);
		n = line.size();		
		int q;
		scanf("%d",&q);
		getchar();
		for(int j = 1;j<=q;j++){
			char c;
			int a,b;
			scanf("%c",&c);
			if(c == 'I'){
				scanf("%d%d",&a,&b);
				updateRange(a,b,1);
				//prnt();
			}else{
				scanf("%d",&a);
				int ans = query(a);
				if(ans%2 == 0) printf("%c\n",line[a-1]);
				else{
					(line[a-1] == '1')? printf("0\n"):printf("1\n");
				}
			}
			getchar();
		}
	}
	return 0;
}