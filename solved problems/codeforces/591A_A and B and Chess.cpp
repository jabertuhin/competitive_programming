#include <bits/stdc++.h>
using namespace std;

int wt(char c){
    if(c == 'Q' || c == 'q'){
        return 9;
    }else if(c == 'R' || c == 'r'){
        return 5;
    }else if(c == 'B' || c == 'b' || c == 'N' || c == 'n'){
        return 3;
    }else if(c == 'P' || c == 'p'){
        return 1;
    }else{
        return 0;
    }
}


int main(){
    int black = 0,white = 0;
    for(int i = 0;i<8;i++){
    	string line;
    	cin>>line;
        for(int j = 0;j<8;j++){
            if(line[j]>='a' && line[j]<='z') black += wt(line[j]);
            else if(line[j]>='A' && line[j]<='Z'){
            	white += wt(line[j]);
            }
        }
    }
    if(white>black) printf("White\n");
    else if(black>white) printf("Black\n");
    else printf("Draw\n");
    return 0;
}
