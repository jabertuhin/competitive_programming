#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	getchar();
	int bW =0,tot = n*m;
	for(int i = 1;i<=n;i++){
		char c;
		for(int j = 1;j<=m;j++){
			cin>>c;
			if(c == 'W' || c == 'G' || c == 'B') bW++;
		}
	}
	(bW == tot)? cout<<"#Black&White"<<endl:cout<<"#Color"<<endl;
	return 0;
}